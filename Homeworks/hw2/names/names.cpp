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
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}
//Change string into lowercase
string toLowerCase(string str) {
	string a;

	//Loop fo each character of string
	//Append the converted char to container string;
	for (char c : str) {
		a += tolower(c);
	}
	return a;
}

//Changes all the names contents to lowercases
vector<string> toLowerCase(vector<string> names) {
	vector<string> a;//Lower case storing vector
	string b = "";//Lower case storing string

	//Loop for each string in vector
	for (string x : names) {
		b = toLowerCase(x);
		a.push_back(b);//Puts the lower case strings to vector
	}
	return a;//Return the lower case vector
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

//Prints all the names
void printNames(const vector<string> &names) {
	for ( string x : names) {
		cout << x << " ";
	}
	cout << std::endl;
}

//Find the minimum character in front of a string. 
//Comparing with ASCII code
int findMin(const vector<string> names) {
	//Highest ASCII code character.Need something to compare it to start
	char min = '~';
	//Found index container
	int a = 0;
	for (int i = 0; i < names.size(); i++) {
		//Take the first letter of a string and compare it
		if (min > names[i].front()) {
			min = names[i].front();
			a = i;
		}
	}
	return a;
}
//Sorting the  names
void sortNames(vector<string>& names) {
	vector<string> sortedNames;//Sorted names container
	for (string x : names) {
		//Find index of a name that should be at the top in alphabetical order.
		int b = findMin(names);
		sortedNames.push_back(names[b]);//Push that name to container
		//Erase the found name so the findMin function will find different name.
		names.erase(names.begin() + b);
	}
	//Names is empty now it swaps with sortedNames contents.
	names = sortedNames;
	printNames(sortedNames);
}

int main() {
	cout << "Enter 10 names " << std::endl;
	vector<string> names;
	inputNames(names);

	cout << std::endl;
	cout << "Checking if 'bat' is in the list." << std::endl;
	if (doesNameExist("bat", names))
		cout << "it exists" << std::endl;

	cout << std::endl;
	cout << "Printing the list: " << std::endl;
	printNames(names);

	cout << std::endl;
	cout << "Sorted the list in alphabetical order: " << std::endl;
	sortNames(names);

	return 0;
}