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
void toLowerCase(vector<string>& names) {
	vector<string> a;
	string b = "";
	for (string x : names) {
		for (char c : x) {
			c = tolower(c);
			b += c;
		}
		x.swap(b);
		a.push_back(x);
	}
	names.swap(a);
}
bool doesNameExist(const string& nameToFind, const vector<string>& names) {
	for ( string x : names) {
		if (x == nameToFind)
			return true;
	}
	return false;
}

void printNames(const vector<string> &names) {
	for ( string x : names) {
		cout << x << " ";
	}
}

void sortNames(const vector<string>& names) {
	vector<string> sortedNames;
//	for(const)
}

int main() {
	vector<string> names;
	inputNames(names);

	toLowerCase(names);
	cout << std::endl;

	if (doesNameExist("bat", names))
		cout << "It exists" << std::endl;

	printNames(names);

	return 0;
}