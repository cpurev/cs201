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
	std::istringstream ss;
	std::vector<std::string> newTokens;
	std::string a;
	int num = 0;
	for (auto s : tokens) {
		ss.str(s);
		while (ss >> a) {
			std::cout << a << "\t";
			newTokens.push_back(a);
			newTokens.push_back(" ");
		}
		ss.clear();
		num++;
	}
	tokens = newTokens;
	return num;
}

void analyzeTokens(const std::vector<std::string>& tokens) {
	std::istringstream ss;
	double b = 0;
	for (auto s : tokens) {
		ss.str(s);
		if (ss >> b)
			std::cout << "[Number]\t" << "\"" << b << "\"" << std::endl;
		else
			std::cout << "\"" << s << "\"" << std::endl;

	}
}