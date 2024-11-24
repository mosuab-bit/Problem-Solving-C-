
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
int SumCols(int arr[3][3], short rows, short colsNumbers)
{
    int sum = 0;
    for (int i = 0; i <= rows - 1; i++)
    {
        sum += arr[i][colsNumbers];
    }
    return sum;
}

void PrintEachColSum(int arr[3][3], short rows, short cols)
{
    int sum = 0;
    cout << "\nThe the following are the sum of each col in the matrix:\n";
    for (int i = 0; i <= cols - 1; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << SumCols(arr, rows,
            i) << endl;
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
    PrintEachColSum(arr, 3, 3);
   
}


