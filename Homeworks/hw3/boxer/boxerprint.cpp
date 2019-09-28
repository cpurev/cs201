//boxerprint.cpp
//Chuluunbat Purev
//2019-9-23
//Body of boxer.hpp

#include "boxer.hpp"
#include <vector>
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

//getInt
int getInt() {
	int num;
	while (true)
	{
		// Input a line of text
		string line;
		getline(std::cin, line);

		// Get an integer from the line, if possible.
		// Return it on success; otherwise, print a message, and repeat.
		istringstream instr(line);
		instr >> num;
		if (!instr)
		{
			std::cout << "*** Try again; type an integer: ";
		}
		else
		{
			return num;
		}
	}
}
//printVec
void printVec(const std::vector<char>& c) {
	for (auto x : c) {
		std::cout << x;
	}
}
//printBox
void printBox(const std::string& msg, const int& n) {
	int width = msg.size() + n * 2 + 2;
	int height = n * 2 + 3;
	int spc = msg.size() + 2;

	std::vector<char> ast(width, '*');

	std::vector<char> aSpc(n, '*');
	aSpc.resize(spc+n, ' ');
	aSpc.resize(width, '*');

	std::vector<char> aMsg(n, '*');
	aMsg.push_back(' ');
	for (char c : msg) {
		aMsg.push_back(c);
	}
	aMsg.push_back(' ');
	aMsg.resize(width, '*');

	for (auto i = 0; i < height; i++) {
		std::cout << std::endl;
		if (i == n || i == n + 2) {
			printVec(aSpc);
			continue;
		}
		if (i == n + 1) {
			printVec(aMsg);
			continue;
		}
		printVec(ast);
	}

}