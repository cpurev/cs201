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
	int a = 50;
	for (int i = 1; i <= 50; i++) {
		if (isAdivB(i, a--))
			std::cout << i << " ,";
	}
	return 0;
}