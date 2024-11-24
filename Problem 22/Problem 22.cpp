

#include <iostream>
using namespace std;

void PrintFibonanciSeries(short Number,int prev1,short prev2)
{
    int FebNumber = 0;
    cout << "1 ";

    if (Number > 0)
    {
        FebNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = FebNumber;
        cout << FebNumber << " ";

        PrintFibonanciSeries(Number - 1, prev1, prev2);
    }
    
      
    
}
int main()
{

    PrintFibonanciSeries(10,0,1);
}


