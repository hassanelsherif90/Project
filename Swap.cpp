#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2){

    cout << "\n Please Enter Number 1" << endl;
    cin >> Num1;

    cout << "\n Please Enter Number 2" << endl;
    cin >> Num2;

}

void Swap (int& A, int& B){
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void PrintResult(int Num1, int Num2){
    cout << "\n Number 1 = " << Num1 <<endl;
    cout << "\n Number 2 = " << Num2 <<endl;
}
int main (){
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(Num1, Num2);
    Swap(Num1, Num2);
    PrintResult(Num1, Num2);
    return 0;
}