//Lab07.cpp
//Chuluunbat Purev
//2019-9-18
//

#include "intio.hpp"
#include <iostream>
using std::cout;

int main() {
	
	cout << "Enter integer: ";
	int num = getInt();
	cout << "Enter integer: ";
	int num1 = getInt();
	cout << "Enter integer: ";
	int num2 = getInt();

	putInt(num, 5);
	putInt(num1, 5);
	putInt(num2, 5);
	cout << std::endl;


	int a = 0, s = 0;
	do {
		cout << "Enter integer: ";
		a = getInt();
		s += a;
	} while (a != 0);

	putInt(s, 10);

	a = 0; s = 1;
	do {
		cout << "Enter integer: ";
		a = getInt();
		if (a == 0)
			break;
		if (s > a)
			s = a;
	} while (a != 0);

	putInt(s, 10);

	return 0;
}