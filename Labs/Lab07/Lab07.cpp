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



	return 0;
}