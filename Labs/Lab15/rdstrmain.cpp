//rdrstrmain.cpp
//Chuluunbat Purev
//2019-10-7
//Reading from string

#include "rdstr.hpp"
#include <vector>
#include <iostream>

int main() {
	std::vector<std::string> a = { "69", "69a", "a69", "5.6", " 68", "\t11", "68 69", "0xA" };
	double b;

	for (auto s : a) {
		b = getDouble(s);
		if(b != -1)
			std::cout << s << "\t" << sqrt(b) << std::endl;
		else
			std::cout << s << std::endl;

	}

	return 0;
}