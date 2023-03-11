#include <iostream>
#include <cmath>
using namespace std;

int main (){
    const double d = 3.14;
    int a = 5;

    double area = d * pow(a,2);
    cout << ceil(area) << endl;
}