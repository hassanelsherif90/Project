#include <iostream>
# include <string>
using namespace std;

void ReadNumbers (int& Num1, int& Num2, int& Num3){
    cout << "\n Please Enter a Number 1 " << endl;
    cin >> Num1;

    cout << "\n Please Enter a Number 2 " << endl;
    cin >> Num2;
    
    cout << "\n Please Enter a Number 3 " << endl;
    cin >> Num3;

}

int Maxof3Numbers(int Num1, int Num2, int Num3){
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
        {
            return Num1;
        }
        else
        {
            return Num3;
        }
    } 
    else 
    {
        if (Num2 > Num3 )
        {
            return Num2;
        }
        else
        {
            return Num3;
        }
    }
}

void PrintResult(int Number ){

    cout << "\n The Max Of Numbers Is " << Number << endl;
}

int main(){
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(Maxof3Numbers(Num1, Num2, Num3));

    return 0;
}