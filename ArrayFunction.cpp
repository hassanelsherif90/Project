#include <iostream>
using namespace std;

void FunReadGrade(float GradeMark[3]){
    cout << "Please Enter Grade 1 \n";
    cin >> GradeMark[0];
    cout << "Please Enter Grade 2 \n";
    cin >> GradeMark[1];
    cout << "Please Enter Grade 3 \n";
    cin >> GradeMark[2];
}
// void FunPrintGrade (int GradeMark[3]){
//     cout << "************************** \n";
//     int Evarge = (GradeMark[0] + GradeMark [1] + GradeMark[2]) / 3;
//     cout << "The Evrage of Gross is : " << Evarge << endl;
// }


float FunPrintGrade(float GradeMark[3]){
    return (GradeMark[0] + GradeMark [1] + GradeMark[2]) / 3; 
}
int main(){
    float GradeMark[3];
    FunReadGrade(GradeMark);
    cout << "The Evrage of Gross is : " << FunPrintGrade(GradeMark) << endl;
    return 0;
}