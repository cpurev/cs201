//tokenizer.cpp
//Chuluunbat Purev
//2019-10-10
//Body of tokenizer.hpp

#include "tokenizer.hpp"
#include <iostream>

bool readLine(std::string& str) {
	std::getline(std::cin, str);
	if (str.length() == 0)
		return false;
	return true;
}