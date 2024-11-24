
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
bool CheckNumberInMatrix(int matrix[3][3], short row, short col, int Number)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == Number)
            {
                return true;
            }
        }
        
    }

    return false;
}
int main()
{
    int Matrix[3][3] = { {9,10,50},{10,9,100},{0,0,9} };


    cout << "\n matrix 1:\n";
    PrintMatrix(Matrix, 3, 3);

    int number = ReadNumber("Please enter number to look for in matrix ?");

    if (CheckNumberInMatrix(Matrix, 3, 3, number))
    {
        cout << "Yes it is there ";
    }
    else
    {
        cout << "No it is not there ";
    }

    system("pause>0");
}