#include <iostream>
#include <cmath>
using namespace std;


enum Color{Red=10, Green =20, Yellow=30, Blue=40};

int main (){
    // int a = 5, d = 40;

    // float area = a * sqrt(pow(d,2)- pow(a, 2));
    // cout << ceil(area) << endl;
    Color MyColor;
    MyColor = Color::Yellow;
    cout << "Color Is : " << MyColor << endl;
}