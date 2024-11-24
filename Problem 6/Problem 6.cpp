

#include <iostream>
#include <iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], int row, int col)
{
	int num = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = num;
			num++;
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
int main()
{
	int arr[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
}

