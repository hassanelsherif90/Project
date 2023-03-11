#include <iostream>
#include <string>

using namespace std;

enum enPassFail{Pass = 1, Fail = 2};

int ReadNum() {
	int Num;
	cout << " \n Please Enter Number " << endl;
	cin >> Num;
	return Num;
}


enPassFail CheckMark( int Num) {
	if (Num >= 50) {
		return enPassFail::Pass;
	}
	else {
		return enPassFail::Fail;
	}
}

void PrintResult(int Mark) {

	if (CheckMark(Mark) == enPassFail::Pass){
		cout << "\n Passed" << endl;

	} else {
		cout << "\n Fail " << endl;
	}

}
int main() {

	PrintResult(ReadNum());
	return 0;
}