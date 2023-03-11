#include <iostream>
#include <string>

using namespace std;

enum EnPrimeNotPrime{ Prime = 1, NotPrime = 2};

float ReadPostiveNumber(string Message ){
    float Number = 0;
    do{
        cout << Message<< endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

EnPrimeNotPrime CheckPrime(int Number){
    int M = round (Number / 2);
    cout << M << endl;
    for (int Counter = 2 ; Counter <= M; Counter ++){
        if (Number % Counter == 0 ){
            cout << Number % Counter << endl;
            return EnPrimeNotPrime::NotPrime;
        }
    }
    return EnPrimeNotPrime::Prime ;
}

void Result(int Number){

    switch (CheckPrime(Number)){
        case EnPrimeNotPrime :: Prime:
            cout << "The Number Is Prime " << endl;
            break;
        case EnPrimeNotPrime :: NotPrime:
            cout << "The Number Is Not Prime " << endl;
            break;
    }
}

int main(){
    Result(ReadPostiveNumber(" Please Enter Posative "));
    return 0;
}