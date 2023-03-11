#include <iostream>
using namespace std;

struct Stperson{

    string name, city, country;
    int age, married;
    float Monthly_salary;
    char gender;
    
};

void FunReadInfo(Stperson &Info){
    cout << " Please Enter Your Name : " << endl;
    getline(cin,Info.name);

    cout << " Please Enter Your Age : " << endl;
    cin >> Info.age;

    cout << "Enter Your City :" << endl;
    cin >> Info.city;

    cout << "Enter Your Country :  " << endl;
    cin >> Info.country; 

    cout << "Enter Month Salary " << endl;
    cin >> Info.Monthly_salary;

    cout << "Are You Married ? / Please Enter 1 Or 0 " << endl;
    cin >> Info.married;

    cout << "What is Your Gender ? Enter M OR F" << endl;
    cin >> Info.gender;
}

void FunPrintInfo (Stperson Info){

    cout << "***********************************************" << endl;
    cout << "Your Name : " << Info.name << endl;
    cout << "Your Age : " << Info.age << endl;
    cout << "City : " << Info.city << endl;
    cout << "Country  : " << Info.country << endl;
    cout << "Monthly Salary : " << Info.Monthly_salary << endl;
    cout << "yearly Salary : " << (Info.Monthly_salary ) * 12 << endl;
    cout << "Gender  : " << Info.gender << endl;
    cout << "Married  : " << Info.married << endl;
    cout << "***********************************************" << endl;

}

int main(){ 
    Stperson Pesrson1;
    FunReadInfo(Pesrson1);
    FunPrintInfo(Pesrson1);

    return 0;
}