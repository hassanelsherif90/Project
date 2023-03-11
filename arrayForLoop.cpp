#include <iostream>
#include <string>
using namespace std;


void ReadNumberAray(int array[100], int& length ){

    cout << "Please enter Length of array" << endl;
    cin >> length;

    for (int i = 0 ; i <= length - 1; i++){
        cout << "Enter Number " << i + 1 << endl;
        cin >> array[i];
    };
}

void PrintNumberArray(int array[100], int length){
    for (int i = 0 ; i <= length - 1; i++){
        cout << " The Nmber index [ "<< i + 1 <<" ] is : " << array[i] << endl;
    }
}
int main(){
    int array1[100], length;
    ReadNumberAray(array1, length);
    PrintNumberArray(array1, length);

}