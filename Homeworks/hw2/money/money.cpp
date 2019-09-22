//money.cpp
//Chuluunbat Purev
//2019-9-22
//Coin counter

#include <iostream> 
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//Get int from user input
int getInt() {
	int num;
	while (true)
	{
		// Input a line of text
		std::string line;
		std::getline(cin, line);

		// Get an integer from the line, if possible.
		// Return it on success; otherwise, print a message, and repeat.
		std::istringstream instr(line);
		instr >> num;
		if (!instr)
		{
			cout << "*** Try again; type an integer: ";
		}
		else
		{
			return num;
		}
	}
}
char grmmr(const int& a) {
	if (a > 1)
		return 's';
	else
		return ' ';
}
int main() {
	int pennies, dimes, quarters, nickels, od;
	cout << "Enter number of coins ~" << endl;

	string a = "How many ";
	cout << a <<"Pennies: "; pennies = getInt();
	cout << a <<"Dimes: "; dimes = getInt();
	cout << a <<"Nickels: "; nickels = getInt();
	cout << a <<"Quarters: "; quarters = getInt();
	cout << a <<"One-dollar	coins: "; od = getInt();

	string b = "You have ";


	return 0;
}