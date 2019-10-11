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
	bool chckStr = false;
	std::string chckString = "";

	for (auto s : tokens) {
		ss.str(s);
		while (ss >> a) {
			if (a.front() == '\"')
				chckStr = true;
			if (a.back() == '\"') {
				newTokens.push_back(chckString + a);
				chckStr = false;
				continue;
			}
			if (!chckStr)
				newTokens.push_back(a);
			else {
				chckString += a;
				chckString.append(" ");
			}
		}
		if (chckStr) {
			chckStr = false;
			newTokens.push_back(chckString);
		}
		newTokens.push_back(" ");
		ss.clear();
		num++;
	}

	tokens = newTokens;
	return num;
}

void analyzeTokens(const std::vector<std::string>& tokens) {

	std::istringstream ss;
	double b = 0;
	std::string str;

	for (auto s : tokens) {

		ss.str(s);

		if (ss >> b) 
			std::cout << "[Number]\t" << "\"" << b << "\"" << std::endl;\

		else {

			str = s;
			if (str.front() == '\"' && str.back() == '\"') 
				std::cout << "[String]\t" << "\"" << str << "\"" << std::endl;
			else if(str == " ")
				std::cout << "[Whitespace]\t" << "\"\"" << std::endl;
			else if (str.front() == '_' || (str.front() <= 'z' && str.front() >= 'a') || (str.front() <= 'Z' && str.front() >= 'A'))
				std::cout << "[Identifier]\t" << "\"" << str << "\"" << std::endl;
			else
				std::cout << "[Other]\t" << "\t\"" << str << "\"" << std::endl;

		}

		ss.clear();

	}
}