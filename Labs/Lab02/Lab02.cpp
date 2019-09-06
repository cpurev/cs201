// Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;
int main()
{
	int n;
	cout << "Enter an integer: "; cin >> n;
	cout << (n + 1) * (n + 1) << endl;

	int m, d, y;
	cout << "Month: "; cin >> m;
	cout << "Day: "; cin >> d;
	cout << "Year: "; cin >> y;
	cout << m << "/" << d << "/" << y << endl;

	if (d < 10 && m < 10)
		cout << y << "-0" << m << "-0" << d;
	else if(d >= 10 && m < 10)
		cout << y << "-0" << m << "-" << d;
	else if (d < 10 && m >= 10)
		cout << y << "-" << m << "-0" << d;
	else if (d >= 10 && m >= 10)
		cout << y << "-" << m << "-" << d;
	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
