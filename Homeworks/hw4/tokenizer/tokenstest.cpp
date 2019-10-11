//tokenstest.cpp
//Chuluunbat Purev
//2019-10-10
//Testing tokens.hpp

#include "tokenizer.hpp"
#include <iostream>

int main() {

	std::vector<std::string> tokens;
	std::string str;

	std::cout << "Please type in some text. When you are done , type ";
	std::cout << "\"End\", \"end\" or \"End\":" << std::endl;

	//Loop till end entered
	//Put all the intputs in tokens
	while (true) {
		readLine(str);
		if (str == "END" || str == "End" || str == "end")
			break;
		tokens.push_back(str);
	}

	std::cout << std::endl;

	//Print lines
	std::cout << "Number of lines tokenized(Exculded End): " << 
		 stringToTokenWS(tokens) << std::endl;

	std::cout << std::endl;
	
	analyzeTokens(tokens);


	return 0;
}