
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

void PrintMiddleRow(int arr[3][3], short row)
{
    cout << "Middle row of the matrix is : \n";
    for (int i = 0; i < row; i++)
    {
       cout <<  arr[row / 2][i] << "    ";
    }
}
void PrintMiddlecol(int arr[3][3],short col)
{
    cout << "\nMiddle col of the matrix is : \n";
    for (int i = 0; i < col; i++)
    {
        cout << arr[i][col / 2] << "    ";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int ArrayMatrix[3][3];

    FillMatrixWithRandomNumbers(ArrayMatrix, 3, 3);
    cout << "\nFirst matrix:\n";
    PrintMatrix(ArrayMatrix, 3, 3);

    PrintMiddleRow(ArrayMatrix, 3);

    PrintMiddlecol(ArrayMatrix, 3);

    system("pause>0");
}