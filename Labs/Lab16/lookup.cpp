// lookup.cpp  INCOMPLETE
// Glenn G. Chappell
// 23 Feb 2018
//
// For CS 201 Spring 2018
// Look-up by Key


//lookup.cpp
//Chuluunbat Purev
//2019-10-9
//Complete lookup

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;


// sequentialSearch
// Given a vector<int> holding keys, and a vector<string> holding the
// associated values, and a key to search for (thekey). Does Sequential
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.
bool sequentialSearch(const vector<int>& keys,
					  const vector<string>& values,
					  const int& thekey,
					  string& thevalue)
{
	int i = 0;
	for (auto k : keys) {
		if (k == thekey) {
			thevalue = values[i];
			return true;
		}
		i++;
	}
	return false;
}


// Main program
// Create a dataset, and do searches in it.
int main()
{
	// Make associative (KEY-VALUE) dataset
	vector<int> keys{
		21,
		22,
		23,
		25,
		27,
		31,
		32,
		33,
		36,
		38
	};
	vector<string> values{
		"Alice Smith",
		"Bill Jones",
		"Charles Johnson",
		"Daphne Robertson",
		"Egbert Williams",
		"Fifi Phillips",
		"George Watson",
		"Harriet Baker",
		"Iris Gump",
		"Jake Hawkins"
	};

	// Print opening message
	cout << "Sequential Search in an associative dataset" << endl;
	cout << endl;

	// Input & search loop
	while (true)
	{
		// Get a line
		cout << "Type a positive integer KEY (empty line to end): ";
		string line;
		getline(cin, line);
		if (!cin)
			return 0;
		if (line == "")
			break;

		// Get an int from the above line
		istringstream in(line);
		int thekey;
		in >> thekey;
		if (!in)
		{
			cout << "Please type a positive integer" << endl;
			cout << endl;
			continue;
		}
		if (thekey < 1)
		{
			cout << "Please type a positive integer" << endl;
			cout << endl;
			continue;
		}

		string thevalue;
		bool found = sequentialSearch(keys, values, thekey, thevalue);
		if (found)
		{
			cout << "KEY found; VALUE = " << thevalue << endl;
		}
		else
		{
			cout << "KEY not found ~~~~~ Please enter string to it."; 
			std::getline(std::cin, thevalue);
			keys.push_back(thekey);
			values.push_back(thevalue);
		}
		cout << endl;
	}
	cout << endl;

	// Quit when user hits Enter
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}