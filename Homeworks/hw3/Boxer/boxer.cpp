//--xer.cpp
//Chuluunbat Purev
//2019-9-27
//source of body.hpp

#include "boxer.hpp"
using std::cout;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

int getInt() {
	int num;
	while (true)
	{
		// Input a line of text
		string line;
		getline(cin, line);

		// Get an integer from the line, if possible.
		// Return it on success; otherwise, print a message, and repeat.
		istringstream instr(line);
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

void printBox(const string& msg, const int& n) {
	int width = msg.size() + n * 2 + 2;
	int height = n * 2 + 3;




	for (auto i = 0; i < height; i++) {
		for (auto j = 0; j < width; j++) {
			if (i >= n && i < n + 3) {
				if (j >= n && j < width - n) {
					if (i == n + 1) {
						cout << msg;
						j += msg.size();
					}
					cout << " ";
					continue;
				}
				cout << '*';
				continue;
			}
			cout << "*";
		}
		cout << std::endl;
	}

}