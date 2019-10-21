//lab20.cpp
//Chuluunbat Purev
//2019-10-21
//Stream manipulators with trig function

#define _USE_MATH_DEFINES
#include <cmath>;
#include <iostream>;
#include <iomanip>

int main() {

	double a = 0;

	for (auto i = 0; i <= 180; i += 5) {

		//Degrees to radian.
		a = i * M_PI / 180;

		//Set the stream to fixed so it exactly shows 8 digits as it is set in setprecision(8)
		std::cout << std::fixed << i << "\t" << std::setprecision(8) << std::cos(a) << std::endl;

	}


	return 0;
}