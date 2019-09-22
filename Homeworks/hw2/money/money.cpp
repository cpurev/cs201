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
std::string grmmr(const int& a) {
	if (a > 1)
		return "s.";
	else
		return ".";
}
int main() {

	int coins[6] = {0};// ;
	string names[6] = {"pennie", "dime", "quarter", "nickel", "half dollar", "one dollar" };
	cout << "Enter number of coins ~" << endl;

	for (int i = 0; i < 6; i++) {
		cout << "How many " << names[i] << " :"; coins[i] = getInt();
	}

	cout << endl;

	for (int i = 0; i < 6; i++) {
		cout << "You have " << coins[i] << " " << names[i] << grmmr(coins[i]) << endl;
	}



	return 0;
}