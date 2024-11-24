
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
        for (int j = 0; j <= cols - 1; j++)
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

bool AreTypicalMatrices(int arr1[3][3], int arr2[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
        return true;
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

    if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYES: both martices are typical.";
    else
        cout << "\nNo: martices are NOT typical.";


    system("pause>0");
}