
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
int CountNumInMatrix(int arr1[3][3], short row, short col,int Number)
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] == Number)
            {
                count++;
            }
        }

    }
    return count;
}
int main()
{
    int Matrix[3][3] = { {9,0,0},{0,9,0},{0,0,9} };


    cout << "\n matrix 1:\n";
    PrintMatrix(Matrix, 3, 3);

    int number = ReadNumber("Enter Number To Count in Matrix ? ");

    cout << "Number " << number << " count in matrix is : " << CountNumInMatrix(Matrix, 3, 3, number);

    system("pause>0");
}