

#include <iostream>
using namespace std;

void PrintFibonanciSeries(short Number)
{
    int prev1 = 1, prev2 = 0, FebNumber = 0;
    cout << "1 ";

    for (int i = 2; i <= Number; i++)
    {
        FebNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = FebNumber;
        
        cout << FebNumber << " ";
    }
}
int main()
{
    PrintFibonanciSeries(10);
}


