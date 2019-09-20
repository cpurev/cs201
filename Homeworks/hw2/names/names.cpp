//names.cpp
//Chuluunbat Purev
//
//Input names, searches name and prints name

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::getline;
using std::vector;
using std::string;

void inputNames(vector<string> &names) {
	for (int i = 0; i < 3; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}

bool doesNameExist(const string& nameToFind, const vector<string>& names) {
	for (const string x : names) {
		if (x == nameToFind)
			return true;
	}
	return false;
}

void printNames(const vector<string> &names) {
	for (const string x : names) {
		cout << x << " ";
	}
}

int main() {
	vector<string> names;
	inputNames(names);

	if (doesNameExist("bat", names))
		cout << "It exists" << std::endl;

	printNames(names);

	return 0;
}