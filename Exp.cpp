#include <iostream>
#include <string>
using namespace std;



int main()
{
    cout << "Please enter String 1 ?"<< endl;
    string String1;
    getline(cin, String1);
    cout << "Please Enter String 2?" << endl;
    string String2;
    getline(cin, String2);
    cout << "Please Enter String 3?" << endl;
    string String3;
    getline(cin, String3);
    cout << "*********************************" << endl;
    cout << "The Length of String is: " << String1.length() << endl;
    cout << "Character at 0, 2 , 4, 7 are :" << String1[0] << String1[2] << String1[4]<< String1[7] <<endl;
    cout << "concatenting String2 and String3 = " << String2 + String3 << endl;
    cout << stoi(String2) << "*" << stoi(String3) << "= " << stoi(String2) * stoi(String3) << endl;




    return 0;

}