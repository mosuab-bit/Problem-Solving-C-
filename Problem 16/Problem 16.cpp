
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

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
int ReadNumber(string Messsage)
{
    int number = 0;
    cout << endl << Messsage;
    cin >> number;
    return number;
}
bool IsSparceMatrix(int arr1[3][3], short row, short col)
{
    int countZero = 0;
    int countNum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] == 0)
            {
                countZero++;
            }
            else
            {
                countNum++;
            }
           
        }

    }
    return countZero > countNum;
}
int main()
{
    int Matrix[3][3] = { {9,10,50},{10,9,100},{0,0,9} };


    cout << "\n matrix 1:\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsSparceMatrix(Matrix, 3, 3))
    {
        cout << "Yes, it is sparce matrix";
    }
    else
    {
        cout << "No, it is not sparce matrix";
    }


    system("pause>0");
}