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


	stringToTokenWS(tokens);


	for (auto s : tokens)
		std::cout << s << std::endl;


	return 0;
}