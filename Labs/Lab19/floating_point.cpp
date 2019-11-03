/**
 * @file     floating_point.cpp
 * @author   Student Name
 * @version  Mar 1, 2019
 * John Quan
 *
 * Useful trigonometric functions.
 */

 // using M_PI for pi
#define _USE_MATH_DEFINES
#include <cmath>

#include <vector>

std::vector<double> degreesToRadians(int degrees) {

	std::vector<double> radians;
	double radian = 0;
	// for each degree, fill the vector with its radian
	for (int degree = 0; degree <= degrees; ++degree) {
		// TODO: calculate a radian and add it to the vector****************
		radian = degree * M_PI / 180.0;
		radians.push_back(radian);
		// *****************************************************************
	}
	return radians;
}

