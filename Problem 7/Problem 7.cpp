
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
void FillTransposeMatrix(int arr[3][3], int arrTranspose[3][3], short row, short col)
{
	for (int i = 0; i <= row - 1; i++)
	{
		for (int j = 0; j <= col - 1; j++)
		{
			arrTranspose[i][j] = arr[j][i];
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
	int arr[3][3],arrTranspose[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << "Transpose Matrix : \n";
	FillTransposeMatrix(arr, arrTranspose, 3, 3);
	PrintMatrix(arrTranspose, 3, 3);

}
