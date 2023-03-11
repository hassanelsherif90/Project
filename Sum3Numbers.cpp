#include <iostream>
#include <string>

using namespace std;

enum enPassFail{Pass = 1, Fail = 2};

void Read3Numbers(int& Num1, int& Num2, int& Num3) {

	cout << "\n Please Enter a Number 1" << endl;
	cin >> Num1;

	cout << "\n Please Enter a Number 2" << endl;
	cin >> Num2;

	cout << "\n Please Enter a Number 3" << endl;
	cin >> Num3;

}

int Sum3Numbers(int Num1,int Num2, int Num3) {
	return Num1 + Num2 + Num3;
}

float Averag3Number(int Num1, int Num2, int Num3) {
	return (float)Sum3Numbers(Num1, Num2, Num3) / 3;
}

enPassFail CheckAverage (float Averag){

	if (Averag >= 50) 
		{
			return enPassFail::Pass;
		} else {
			return enPassFail::Fail;
		}

}

void Print3Numbers(float Averag){

	// cout << "\n The Sum 3 Numbers Is " << Total << endl;
	cout << "\n The Averag 3 Numbers Is " << Averag << endl;
	if (CheckAverage(Averag) == enPassFail ::Pass)
	{
		cout <<  "\n  Passed " << endl;
	}
	else
	{
		cout << "l Faild " << endl;
	}

}

int main() {
	int Num1, Num2, Num3;
	Read3Numbers(Num1, Num2, Num3);
	Print3Numbers(Averag3Number(Num1, Num2, Num3));
	return 0;
}