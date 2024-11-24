
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

void FillMultiplyMatrix(int multiplyMatrix[3][3], int firstMatrix[3][3], int secondMatrix[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            multiplyMatrix[i][j] = firstMatrix[i][j] * secondMatrix[i][j];
        }
       
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int firstMatrix[3][3], secondMatrix[3][3], multiplyMatrix[3][3];

    FillMatrixWithRandomNumbers(firstMatrix, 3, 3);
    cout << "\nFirst matrix:\n";
    PrintMatrix(firstMatrix, 3, 3);
    
    FillMatrixWithRandomNumbers(secondMatrix, 3, 3);
    cout << "\nSecond matrix:\n";
    PrintMatrix(secondMatrix, 3, 3);

    FillMultiplyMatrix(multiplyMatrix, firstMatrix, secondMatrix, 3, 3);
    cout << "\nResult:\n";
    PrintMatrix(multiplyMatrix, 3, 3);
    system("pause>0");
}