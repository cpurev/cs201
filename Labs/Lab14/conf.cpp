//conf.cpp
//Chuluunbat Purev
//2019-10-4
//Body of conf.hpp

#include "conf.hpp"

void printDec(const std::string& str) {
	for (int i = str.size(); i >= 0; --i) {
		std::cout << str.substr(0, i) << std::endl;
	}
}

void printPyr(const std::string& str) {
	int a = str.size();
	std::string b;
	for (int i = 0; i <= str.size() >> 1; i++) {
		b.append(" ");
		std::cout << b << str.substr(i, a) << std::endl;
		a-=2;
	}

}