
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
int SumCol(int arr[3][3], short rows, short colsNumber)
{
    int sum = 0;
    for (int i = 0; i <= rows - 1; i++)
    {
        sum += arr[i][colsNumber];
    }
    return sum;
}
void SumMatixColsInArry(int arr[100], int arr2d[3][3], short row, short cols)
{
    for (int i = 0; i <= row - 1; i++)
    {
        arr[i] = SumCol(arr2d,row, i);
    }

}
void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << "Col " << i + 1 << " = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arrSum[3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);
    SumMatixColsInArry(arrSum, arr, 3, 3);
    PrintArray(arrSum, 3);
    system("pause>0");
}