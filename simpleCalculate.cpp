#include <iostream>
#include <string>
using namespace std;

enum enOperationType { 
	Add = '+', Subtarct = '-',
	Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Number = 0 ;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

enOperationType ReadOpType (){
	char OT = '+';
	cout << "Please Chose Type Operating (+ , - , * , / ) ? "<<endl;
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate (float Num1, float Num2, enOperationType OT){

	switch (OT){
		case enOperationType ::Add:
			return Num1 + Num2;
			break ;
		case enOperationType :: Subtarct:
			return Num1 - Num2;
			break ;
		case enOperationType :: Multiply:
			return Num1 * Num2;
			break ;
		case enOperationType :: Divide :
			return Num1 / Num2;
			break ;
		default :
			return Num1 + Num2;
	}
}


int main(){
	
	int Number1 = ReadNumber("Pleses Enter number 1");
	int Number2 = ReadNumber("Pleses Enter number 2");
	enOperationType OT = ReadOpType();
	cout << "Calculate " << Calculate(Number1, Number2, OT) << endl;
	return 0;
}