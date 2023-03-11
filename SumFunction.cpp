#include <iostream>
using namespace std;

int funSum(int Num1, int Num2)
{
    return Num1 + Num2;
}

int main()
{
    int Num1, Num2;
    cin >> Num1;
    cin >> Num2;

    cout << funSum(Num1 , Num2) << endl;
}