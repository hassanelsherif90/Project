#include <iostream>
#include <cmath>
using namespace std;



void MyName(){
    cout << "Hassan Ali" << endl;
}

string YorName(string Name)
{
    cout << "Whats your Name ?" << endl;
    cin >> Name;
    return Name ;
}

int Funmod(int Num){
    // if ((Num %2) == 0 ){
    //     cout << "Even" << endl;
    // } else {
    //     cout <<  "ODD" << endl;
    //     }
    int Result = Num % 2;
    return Result; 
}

int main()
{
    int Num;
    cin >> Num;
    if (Funmod(Num) == 0 ){
        cout << "Even" << endl;
    } else {
        cout <<  "ODD" << endl;
        }
    // string Name = YorName(Name);
    // cout << "Your Name Is : " << Name << endl;
    // MyName();
    return 0;
}