// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 11/28/18 for CS 201 Fall 2018
// Chris Hartman

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <iomanip>

// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
	// ***** Time: constructors *****
	Time() {
		_hr = 20;
		_min = 7;
		_sec = 43;
	}
	// ***** Time: general public member functions *****
	Time(int hr, int min, int sec) {
		_hr = hr; _min = min; _sec = sec;
	}
	void print() const
	{
		cout << std::setfill(':') << _hr << std::setw(2) << _min << std::setw(3) << _sec;  // DUMMY
		// TODO: Write this!
	}

	// ***** Time: data members *****
private:
	int _hr;   // Hours past midnight
	int _min;  // Minutes past the hour
	int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
	// Print header
	cout << "Here are some times:" << endl;
	cout << endl;

	// Make a Time object; print it
	const Time t1;
	cout << "Time #1: [";
	t1.print();
	cout << "]" << endl;
	cout << endl;

	const Time t2(12, 0 ,0);
	cout << "Time #2: [";
	t2.print();
	cout << "]" << endl;
	cout << endl;

	// Wait for user
	cout << "PRESS ENTER to quit ";
	while (cin.get() != '\n');
}
