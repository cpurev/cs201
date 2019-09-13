//dotcross.cpp
//Chuluunbat Purev
//2019-9-11
//A program that computes dot and cross product of  a 3-component vector

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main() {
	float ax, ay, az;
	float bx, by, bz;
	cout << "Enter 3 floating type numbers\n";

	//Printing the variable name and scanning the variable to put it in.
	cout << "Ax: "; cin >> ax;
	cout << "Ay: "; cin >> ay;
	cout << "Az: "; cin >> az;
	cout << "Bx: "; cin >> bx;
	cout << "By: "; cin >> by;
	cout << "Bz: "; cin >> bz;

	//Calculating Dot product.Printing the answer.
	float dotAnswr = ax * bx + ay * by + az * bz;
	cout << "A dot B = " << setprecision(5) << dotAnswr << endl;

	//Calculating Cross product. Printing the answer.
	float crss1 = ay * bz - az * by;
	float crss2 = az * bx - ax * bz;
	float crss3 = ax * by - bx * ay;
	cout << "A cross B = (" << setprecision(5) << crss1 << "," << setprecision(5) << crss2 << "," << setprecision(5) << crss3 << ")";

	return 1;
}