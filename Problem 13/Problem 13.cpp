
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

bool IsIdentityMatrix(int arr1[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j&&arr1[i][j]!=1)
            {
                return false;
            }
            if (i != j&&arr1[i][j]!=0)
            {
                return false;
            }
        }
        
    }
    return true;
}
int main()
{
    int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

    
    cout << "\n matrix 1:\n";
    PrintMatrix(Matrix1, 3, 3);

    
    if (IsIdentityMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is identity.";
    else
        cout << "\nNo: Matrix is NOT identity.";

    system("pause>0");
}