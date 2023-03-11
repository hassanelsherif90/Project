#include <iostream>
#include <string>

using namespace std;

int ReadNumber (){
    int N;
    cout << "\n Please Enter N" << endl;
    cin >> N;
    return N;
}

void PrintNumber(int N){
    cout << "Print By While " << endl;
    int Counter = 0;

    while (Counter < N){
        Counter ++;
        cout << Counter << endl;
    }
}

void PrintNumberByDoWhile(int N){
    cout << "Print By Do While " << endl;
    int Counter = 0;
    do {
        Counter ++;
        cout << Counter << endl;
    } while (Counter < N);
}


void PrintNumberByFor(int N){
    cout << "Print By For Loop " << endl;
    for(int Counter = 1; Counter <= N ;  Counter ++ ){
        cout << Counter << endl;
    }
}


int main(){
    PrintNumber(ReadNumber());
    PrintNumberByDoWhile(ReadNumber());
    PrintNumberByFor(ReadNumber());
    return 0;
}