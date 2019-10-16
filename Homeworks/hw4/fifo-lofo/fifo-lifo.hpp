//fifo-lifo.hpp
//Chuluunbat Purev
//2019-10-15
//Simple FIFO and LIFO

#include <vector>
using std::vector;
#include <string>
using std::string;

#ifndef FIFO_LIFO
#define FIFO_LIFO

//First-In First-Out
//The First item inserted will be the first item to be deleted.

//Insert an item
void fifoPush(vector<string>& container, const string& item);

//Delete an item
void fifoPop(vector<string>& container, const string& item);

//Last-In First-Out
//The Last item inserted will be the first item to be deleted.

//Insert an item
void lifoPush(vector<string>& container, const string& item);

//Delete an item
void lifoPop(vector<string>& container, const string& item);

//Shared functionality

//true if empty
bool isContainerEmpty(const vector<string>& containter);

//Using element loop print all the items with newline;
void printContainer(const vector<string>& container);

//Testing functions

//Call other functions and return true at the end
bool testFifo();
bool testLifo();

#endif // !FIFO_LIFO
