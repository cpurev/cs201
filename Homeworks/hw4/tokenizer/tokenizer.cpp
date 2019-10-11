//tokenizer.cpp
//Chuluunbat Purev
//2019-10-10
//Body of tokenizer.hpp

#include "tokenizer.hpp"
#include <iostream>
#include <sstream>


bool readLine(std::string& str) {

	std::getline(std::cin, str);

	//if blank return false;
	if (str.length() == 0)
		return false;

	return true;
}


unsigned stringToTokenWS(std::vector<std::string>& tokens) {

	std::istringstream ss;

	//New whitespace splited strings are stored
	std::vector<std::string> newTokens;

	//Every piece of string storing
	std::string a;
	
	//Line storing
	int num = 0;

	//String checking variables
	bool chckStr = false;
	std::string chckString = "";

	//Loop for the amount of lines inputted
	for (auto s : tokens) {
		
		//Put the line of strings in the stream
		ss.str(s);

		//Loop for amount of whitespaces
		while (ss >> a) {

			//Check if its string;
			//Set string state true if true
			//We do this for string having space in them
			if (a.front() == '\"')
				chckStr = true;

			//Strings end
			if (a.back() == '\"') {
				newTokens.push_back(chckString + a);
				chckStr = false;
				continue;
			}

			//If not string then just push it in
			//If string then append to temporary string
			if (!chckStr)
				newTokens.push_back(a);
			else {
				chckString += a;
				chckString.append(" ");
			}
		}

		//If " not closed it puts everything after it as one
		//Set the string state to false;
		if (chckStr) {
			chckStr = false;
			newTokens.push_back(chckString);
			chckString = "";
		}

		//Push white space for every line
		newTokens.push_back(" ");

		//Clear the buffer of istringstream as it stays false
		//Thus not being able to reuse
		ss.clear();

		//Number of lines
		num++;
	}

	//Set the new tokens to refrenced toke changing the values
	tokens = newTokens;

	return num;
}

void analyzeTokens(const std::vector<std::string>& tokens) {

	std::istringstream ss;

	//Number storing
	double b = 0;

	//All the other
	std::string str;

	//Loop for amount of strings
	for (auto s : tokens) {

		ss.str(s);

		//If its number
		if (ss >> b) 
			std::cout << "[Number]\t" << "\"" << b << "\"" << std::endl;\

		else {

			//Not needed string but already wrote it with str
			str = s;

			//Check if its string
			if (str.front() == '\"' && str.back() == '\"') 
				std::cout << "[String]\t" << "\"" << str << "\"" << std::endl;

			//Check if its whitespace(line)
			else if(str == " ")
				std::cout << "[Whitespace]\t" << "\"\"" << std::endl;

			//Check if its identifier with given conditionds from assignment
			else if (str.front() == '_' || (str.front() <= 'z' && str.front() >= 'a') || (str.front() <= 'Z' && str.front() >= 'A'))
				std::cout << "[Identifier]\t" << "\"" << str << "\"" << std::endl;

			//All the other character (+, =, #, " etc.)
			else
				std::cout << "[Other]\t" << "\t\"" << str << "\"" << std::endl;

		}

		//Clear buffer
		ss.clear();

	}
}