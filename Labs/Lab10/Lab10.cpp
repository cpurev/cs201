//Lab10.cpp
//Chuluunbat Purev
//2019-9-25
//Boolean values

#include <iostream>
#include "boolDiv.hpp"

int main() {

	for (int i = 1; i <= 40; i++) {
		if (isDiv3(i))
			std::cout << i << ", ";
	}


	std::cout << std::endl;



	for (int i = 1; i <= 50; i++) {
		if (isAdivB(i, 2))
			std::cout << i << " ,";
	}


	return 0;
}