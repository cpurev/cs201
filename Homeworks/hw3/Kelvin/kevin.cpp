//kevin.cpp
//Chuluunbat Purev
//2019-9-28
//Kelvin converter

#include <iostream>

//Errors in the given code
// ctok function was returning int while its suppose to return double
// k was not initialised in cin >> k
// ctok is suppose to get double but string c is given
// cout is a function and case sensitive capital c will not work
// '/n' is wrong suppose to be '\n'

//Calcualte kelvin from given celsius
double ctok(double c){
	if (c < -273.15)
		return 0;
	double k = c + 273.15;
	return k;
}

int main() {
	double c = 0;
	std::cout << "Enter celsius to convert to kelvin: "; std::cin >> c;
	double k = ctok(c);
	std::cout << k << "K.";
	return 0;
}