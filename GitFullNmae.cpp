#include <iostream>
#include <string>
using namespace std;

struct stName{
	string FirstName;
	string LastName;
};

stName ReadNameInfo()
{
	stName Name;
	cout << "\n Please enter firstname " << endl;
	cin >> Name.FirstName;
	cout << "\n Please enter lastname "<< endl;
	cin >> Name.LastName;
	return Name;
	
}

string GetFullName(stName Name){
	string FullName = Name.FirstName + " " + Name.LastName;
	return FullName;
}


void PrintFullName(string FullName){
	cout << "\n FullName Is " << FullName << endl;
}


int main()
{
	PrintFullName(GetFullName(ReadNameInfo()));
	return 0;
}