// dynamic.cpp  INCOMPLETE
// Glenn G. Chappell
// 13 Apr 2018
//
// For CS 201 Spring 2018
// Dynamic Allocation
//
// Modified 11/19/18
// Chris Hartman
// For CS 201 Fall 2018

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// printThree
// Takes a pointer to an int array, which must have size at least 3 --
// or a null pointer. Prints the first three items in the array, or
// "NULL POINTER", if the passed pointer is null.
void printThree(const int* p)
{
	if (p == nullptr)
	{
		cout << "NULL POINTER" << endl;
	}
	else
	{
		cout << p[0] << " " << p[1] << " " << p[2] << endl;
	}
}


// Main Program
// Do some dynamic allocation. Call printThree multiple times.
int main()
{
	// Make a dynamic array of int, with size at least three. Set the
	// values of the first three items in the array.
	// Then call printThree, passing (a pointer to) the array.
	int* p = new int[5]{ 1,2,3,4,5 };
	printThree(p);
	cout << endl;

	p = nullptr;
	// Call printThree with a null pointer.
	printThree(p);
	cout << endl;

	// Deallocate the dynamic array.
	delete[] p;
	printThree(p);
	cout << endl;

	// Wait for user
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}
	