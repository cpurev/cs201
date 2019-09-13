//greatest.cpp
//Chuluunabat Purev
//2019-9-11
//Error handling with cin(input). Finding the maximum inputed number.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 0; //Input storing variable. 
	int a = 0;//Maximum input storing variable.

	cout << "Enter a sequence of positive integers, ending with zero.\nI will print the greatest positive number entered." << endl;

	cout << "Enter a positive integer: ";

	//This loop only stops when input is 0.
	while (true) {
		//If input is any other type than integer. this loop wont stop. this loop only happens when wrong type is entered.This also takes input.
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Error~ You have entered non integer. Try again: ";
			continue;
		}
		//Input is 0 loop is broken out.
		if (n == 0)
			break;
		//Input is negative Error message and goes back to top of loop
		if (n < 0) {
			cout << "Error~ You have entered negative number. Try again: ";
			continue;
		}
		cout << "Enter a positive integer: ";
		
		//Maximum finding if-statements
		if (a < n) {
			a = n;
			continue;
		}
	}

	cout << endl;
	if (a != 0)
		cout << "The greatest number entered: " << a;
	else
		cout << "No positive integer has been entered!";
	return 1;
}