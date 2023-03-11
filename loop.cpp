#include <iostream>
#include <string>
using namespace std;


int main (){
    // for (int i = 1; i <= 10; i++){
    //     // for(int j = i; j <=10; j++)
    //     for(int j = i; j <=10; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    // for (int i = 65; i <= 90; i++){
    //     // for(int j = i; j <=10; j++)
    //     for(int j = i; j <= 90 ; j++)
    //     {
    //         cout <<char(i) << char(j)<< "\n";
    //     }
    // }
    // for (int i = 10; i >= 1 ; i--){
    //     for(int j = i; j >= 1; j--){
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    for (int i = 10; i >= 1 ; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= 10 ; i++ )
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // for (int i = 10; i >= 1 ; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for (int i = 1; i <= 10 ; i++ ){
    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
}