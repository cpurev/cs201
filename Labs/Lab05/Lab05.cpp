//Lab05.cpp
//Chuluunbat Purev
//2019-9-13
//Program that uses switch-statement

#include <iostream>

using std::cout;
using std::cin;

int main() {
	int a;
	cin >> a;

	switch (a) {
		case 1: cout << "You have entered 1"; break;
		case 0: cout << "You have entered 0"; break;
		case -1: cout << "You have entered -1"; break;
		default: cout << "The number is " << a;
	}

	cout << std::endl;

	if(a == 1)
		cout << "You have entered 1";
	else if(a == 0)
		cout << "You have entered 0";
	else if(a == -1)
		cout << "You have entered -1";
	else
		cout << "The number is "<<a;


	return 0;
}