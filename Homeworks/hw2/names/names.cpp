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

//Take the names
void inputNames(vector<string> &names) {
	for (int i = 0; i < 3; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}

//Changes all the names contents to lowercases
vector<string> toLowerCase(vector<string> names) {
	vector<string> a;//Lower case storing vector
	string b = "";//Lower case storing string
	for (string x : names) {
		b = toLowerCase(x);
		a.push_back(b);//Puts the lower case strings to vector
	}
	return a;//Return the lower case vector
}
//Change string into lowercase
string toLowerCase(string str) {
	string a;
	for (char c : str) {
		a += tolower(c);
	}
	return a
}
//Check if name exists.
bool doesNameExist(const string& nameToFind, const vector<string>& names) {
	string a = toLowerCase(nameToFind);
	vector<string> b = toLowerCase(names);
	for ( string x : b) {
		if (x == a)
			return true;
	}
	return false;
}

//Prints all the names in inputed order.
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

	if (doesNameExist("bat", names))
		cout << "It exists" << std::endl;

	printNames(names);

	return 0;
}