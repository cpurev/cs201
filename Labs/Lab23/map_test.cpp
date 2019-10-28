//map_test.cpp
//Chuluunbat Purev
//2019-10-28
//Using map

#include <iostream>
#include <map>

int main() {

	std::map<int, std::string> mp = {
		{5, "Aat"},
		{ 10, "Bat"},
		{ 6, "Rat"},
		{ 8, "Sat"},
		{ 9, "Pat"},
		{ 7, "Wat"}
	};

	mp.erase(8);

	for (const auto& p : mp) {
		auto k = p.first;
		auto v = p.second;
		std::cout << "Key: " << k << "\t\tValue: " << v << std::endl;
	}


	return 0;
}