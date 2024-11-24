

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
    for (int i = 0; i <= rows-1; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i <= rows-1; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);
    system("pause>0");
}


