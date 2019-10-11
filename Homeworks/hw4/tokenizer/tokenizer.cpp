//tokenizer.cpp
//Chuluunbat Purev
//2019-10-10
//Body of tokenizer.hpp

#include "tokenizer.hpp"
#include <iostream>
#include <sstream>

bool readLine(std::string& str) {
	std::getline(std::cin, str);
	if (str.length() == 0)
		return false;
	return true;
}

unsigned stringToTokenWS(std::vector<std::string>& tokens) {
	std::vector<std::string> newTokens;
	std::istringstream ss;
	std::string a;
	int num;
	for (auto s : tokens) {
		ss.str(s);
		while (std::getline(ss, a, ' ')) {
			newTokens.push_back(a);
			num++;
		}
		num++;
		
	}
	tokens = newTokens;

}