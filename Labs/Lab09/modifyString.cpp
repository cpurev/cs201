//modifyString.cpp
//Chuluunbat Purev
//2019-9-23
//Extension of modigyString.hpp

#include "modifyString.hpp"

int modifyString(std::string& referencedString, int n) {
	referencedString.append(std::to_string(n));
	return referencedString.size();
}

std::string modifyStringI(std::string s, int& referencedInt) {
	s.append(std::to_string(referencedInt));
	return s;
}