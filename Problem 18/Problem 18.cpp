
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}
void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= cols - 1; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

bool IsIntersectedNumbers(int matrix1[3][3], int Number, short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix1[i][j] == Number)
            {
                return true;
            }
        }
       
    }
    return false;
}
void PrintIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short row, short col)
{
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (IsIntersectedNumbers(matrix1,matrix2[i][j],row,col))
            {
                cout << matrix2[i][j] << "   ";
            }
        }

    }
}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\n matrix 1:\n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\n matrix 2:\n";
    PrintMatrix(Matrix2, 3, 3);
    cout << "\n Intersected number is : \n";
    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

    
    system("pause>0");
}