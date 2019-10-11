//userInput.cpp
//Chuluunbat Purev
//2019-9-30
//Body of userInput.hpp

#include "userInput.hpp"
#include <iostream>

void getUserStrings(std::vector<std::string>& words) {
	std::string a;
	while (true) {
		std::cin >> a;
		if (a == "end")
			break;
		words.push_back(a);
	}
}
