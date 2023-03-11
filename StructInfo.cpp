#include <iostream>
#include <string>

using namespace std;

struct stInfo {
	int Age;
	bool HasLinecesDriving;
	bool HasRecommedations;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "please enter your age" << endl;
	cin >> Info.Age;

	cout << "\n Has you linecesDriving ?" << endl;
	cin >> Info.HasLinecesDriving;
	

	cout << "\n Has you Recommedations ?" << endl;
	cin >> Info.HasRecommedations;

	return Info;
}

bool Accepted(stInfo Info) {
	if (Info.HasRecommedations){
		return true;
	} else{
		return (Info.Age > 21 && Info.HasLinecesDriving);
	}

	
}

void PrintInfo(stInfo Info) {

	if (Accepted(Info)) {
		cout << "\n Hiered " << endl;
	}
	else {
		cout << " \n Rejected " << endl;
	}

}
int main() {
	PrintInfo(ReadInfo());
	// return 0;
	return 0;
}