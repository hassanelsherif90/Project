#include <iostream>
#include <string>
using namespace std;

enum enNumberType{ODD = 1, Even = 2};

int ReadNumber() {
	int Number;
	cout << "Pleae enter Number " << endl;
	cin >> Number;
	return Number;
}

enNumberType CheckNumberType(int Number) {

	int result = Number % 2;

	if (result == 0) {
		return enNumberType::Even;
	}
	else {
		return enNumberType::ODD;
	}

}


void PrintNumberType(enNumberType NumberType) {

	if (NumberType == enNumberType::Even) {
		cout << "\n The Number Is Even" << endl;
	}
	else {
		cout << "\n The Number Is Odd " << endl;
	}

}


int main() {

	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}