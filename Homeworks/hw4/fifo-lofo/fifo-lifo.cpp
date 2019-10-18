//fifo-lifo.cpp
//Chuluunbat Purev
//2019-10-15
//Body of fifo-lifo.hpp

#include <iostream>
using std::cout;

#include "fifo-lifo.hpp"

//We just use vector push_back() module to insert the item to the end
void fifoPush(vector<string>& container, const string& item) {container.push_back(item);}

//erase() method resizes and does all the work so we just call it and erase the first item
void fifoPop(vector<string>& container, const string& item) {container.erase(container.begin());}

//Same as fifoPush
void lifoPush(vector<string>& container, const string& item) { container.push_back(item); }

//pop_back() removes last element  so we just call it.
void lifoPop(vector<string>& container, const string& item) { container.pop_back(); }

//using empty() find if its empty
bool isContainerEmpty(const vector<string>& container) {
	if (container.empty())
		return false;
	return true;
}

//using element for-loop we print with whitespaces between elemtns
//Does not end line
void printContainer(const vector<string>& container) {
	for (auto c : container)
		std::cout << c << " ";
}
