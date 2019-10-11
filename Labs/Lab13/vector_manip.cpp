//vector_mainip.cpp
//Chuluunbat Purev	
//2019-10-2
//implementation of vector_mainip.hpp

#include "vector_manip.hpp"
#include <iostream>

void firstLetterChange(std::vector<std::string>& strVec, const char& c) {
	for (auto& s : strVec) {
		s.front() = c;
	}
}
void addUserStrings(std::vector<std::string>& strVec, const std::string sentinel) {
	std::string a; std::getline (std::cin, a);
	strVec.push_back(a);
	strVec.push_back(sentinel);
}