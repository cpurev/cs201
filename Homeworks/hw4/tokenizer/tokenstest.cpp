//tokenstest.cpp
//Chuluunbat Purev
//2019-10-10
//Testing tokens.hpp

#include "tokenizer.hpp"
#include <iostream>

int main() {
	std::vector<std::string> tokens;
	std::string str;


	while (true) {
		readLine(str);
		if (str.compare("end") == 0)
			break;
		tokens.push_back(str);
	}

	std::cout << stringToTokenWS(tokens) << std::endl;

	std::cout << std::endl;

	analyzeTokens(tokens);


	return 0;
}