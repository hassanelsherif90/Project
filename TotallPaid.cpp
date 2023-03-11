#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message){
    float Number = 0;
    do {cout << Message << endl;
        cin >> Number;
    }while (Number <= 0);
    return Number;
}

float CalculateReminder(float TotalBill, float TotalCashPaid)
{
    return (TotalCashPaid - TotalBill);
}

int main(){
    float TotalBill = ReadNumber("Please Enter Total Bill ");
    float TotalCashPaid = ReadNumber("Please Enter Total Cash Paid");

    cout << endl;
    cout << "Total Bill = " << TotalBill <<endl;
    cout << "Total Cash Paid = " << TotalCashPaid <<endl;
    cout << " ********************************* " <<endl;
    cout << "Remainder = " << CalculateReminder(TotalBill, TotalCashPaid) << endl;
    return 0;
}