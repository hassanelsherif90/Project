#include <iostream>
#include <cmath>
using namespace std;

float FunCircle(float r){
    const float d = 3.14;
    float AreaCircle = d * pow(r, 2);
    return AreaCircle;
}

float FunCircle2(float r){
    const float d = 3.14;
    float AreaCircle = (d * pow(r , 2)) / 4;
    return AreaCircle;
}

float FunCircle3(float a, float b){
    const float d = 3.14;
    float AreaCircle = (d *(pow(b, 2) / 4) * ((2 * a - b)/ (2 * a + b)) );
    return AreaCircle;
}

int main(){
    float a, b;
    cin >> a;
    cin >> b;
    // cout << "Circle Area is : " << FunCircle(r) << endl;
    cout << "Circle Area is : " << FunCircle3(a , b) << endl;

    return 0;
}