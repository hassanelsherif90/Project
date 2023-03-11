#include <iostream>
#include <cmath>
using namespace std;

int main (){
    const double d = 3.14;
    int a = 5 , b = 6 , c = 7;

    // double area = (d * pow(a,2))/4;
    // double area = d * (pow(a,2)/pow(2,2));
    // double area = pow(a, 2)/ (d * 4);
    // double area = d * (pow(b, 2) / 4) * ((2 * a - b))/ (2 * a + b);
    double p = (a + b + c) / 2;
    double area = d * pow((a * b * c) / (4 * sqrt(p * (p - a ) * (p - b) * (p -c))), 2);
    cout << ceil(area) << endl;
    cout << floor(area) << endl;
    return 0;
}