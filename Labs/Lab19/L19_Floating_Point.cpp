/**
 * @file     L19_Floating_Point.cpp
 * @author   Student Name
 * @version  Jan 28, 2019
 * John Quan
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <vector>
 // using sin, cos
#include <cmath>
#include <iomanip>

#include "floating_point.hpp"

int main() {
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	std::vector<double> v1{ 1, 2, 3, 4, 5 };
	std::vector<double> v;
	for (size_t i = 2; i < v1.size(); ++i) {
		++v1[i];
		std::cout << v1[i] << std::endl;
	}
	std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	v = degreesToRadians(360);
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.
	std::cout << "degree" << std::setw(15) << "sin" << std::setw(20) << "cos" << std::endl;
	for (auto i = 0; i < v.size(); i++) {
		std::cout << i << std::setw(20) << sin(v[i]) << std::setw(20) << cos(v[i]) << std::endl;
	}

	// *****************************************************************

	return 0;
}