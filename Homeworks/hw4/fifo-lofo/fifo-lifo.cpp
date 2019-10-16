//fifo-lifo.cpp
//Chuluunbat Purev
//2019-10-15
//Body of fifo-lifo.hpp

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "fifo-lifo.hpp"

void fifoPush(vector<string>& container, const string& item) {container.push_back(item);}

void fifoPop(vector<string>& container, const string& item) {container.erase(container.begin());}

void lifoPush(vector<string>& container, const string& item) { fifoPush(container, item); }

void lifoPop(vector<string>& container, const string& item) { container.pop_back(); }

void printContainer(const vector<string>& container) {
	for (auto c : container)
		std::cout << c << " ";
}