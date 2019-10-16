//fifo-lifo.cpp
//Chuluunbat Purev
//2019-10-15
//Body of fifo-lifo.hpp

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "fifo-lifo.hpp"

void fifoPush(vector<string>& container, const string& item) {
	container.push_back(item);
}