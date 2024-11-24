
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


int ReturnMaxNumberInMatrix(int matrix[3][3], short row, short col)
{
    int MaxNum = matrix[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] > MaxNum)
            {
                MaxNum = matrix[i][j];
            }
        }

    }
    return MaxNum;

}
bool IsPalindromeMatrix(int matrix[3][3], short row, short col)
{
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col/2; j++)
        {
            if (matrix[i][j]!=matrix[i][col-1-j])
            {
                return false;
            }
        }

    }
        return true;
}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\n matrix :\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsPalindromeMatrix(Matrix, 3, 3))
    {
        cout << "\n Yes it is Palindrome";
    }
    else
    {
        cout << "\n No it is not Palindrome";
    }

    system("pause>0");
}