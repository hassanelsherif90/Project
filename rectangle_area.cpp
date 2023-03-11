#include <iostream>
#include <cmath>
using namespace std;

float FunRectangle_area(float a, float d){
    float Area ;
    Area = a * sqrt((pow(d, 2) - pow(a, 2)));
    return Area;
}
float FunRectangle_area2(float a, float d){
    float Area = a * d ;
    return Area;
}

int main(){
    float a , d;
    cin >> a;
    cin >> d;
    cout << "Rectangle Area is :" << FunRectangle_area(a, d)<< endl;
    cout << "Rectangle Area is :" << FunRectangle_area2(a, d)<< endl;

    return 0;
}