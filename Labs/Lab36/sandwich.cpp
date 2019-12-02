// sandwich.cpp
// Chuluunbat Purev
// 2019-12-2
//Flags

// Glenn G. Chappell
// 16 Apr 2018
//
// For CS 201 Spring 2018
// Sandwich colors - Passing Flags in an int

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// Bit masks for various sandwich colors
const int RED = 1;
const int GREEN = 2;
const int BLUE = 4;


void colorMixer(int colors)
{
	cout << "Colors:";

	if ((colors & RED) != 0 && (colors & GREEN) != 0 && (colors & BLUE) != 0) {
		cout << " white" << endl; return;
	}

	if ((colors & RED) != 0 && (colors & GREEN) != 0) {
		cout << " yellow" << endl; return;}

	if ((colors & GREEN) != 0 && (colors & BLUE) != 0) {
		cout << " light blue" << endl; return;
	}

	if ((colors & BLUE) != 0)
		cout << " blue";

	if ((colors & RED) != 0)
		cout << " red";

	if ((colors & GREEN) != 0)
		cout << " green";

	if (colors == 0)
		cout << " (none)";

	cout << endl;
}


// Main Program
// Call function "sandwich" to specify sandwiches with various
// combinations of colors.
int main()
{
	cout << "Color Mixer #1" << endl;
	colorMixer(RED | GREEN);
	cout << endl;

	cout << "Color Mixer #2" << endl;
	colorMixer(GREEN | BLUE);
	cout << endl;

	cout << "Color Mixer #3 - all colors" << endl;
	colorMixer(RED | GREEN | BLUE);
	cout << endl;

	cout << "Color Mixer #4 - no colors" << endl;
	colorMixer(0);
	cout << endl;

	// Wait for user
	cout << "PRESS ENTER to quit ";
	while (cin.get() != '\n');
}