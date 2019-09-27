//Lab11.cpp
//Chuluunbat Purev
//2019-9-27
//Characters in string

#include <iostream>
#include <string>

int main() {
	std::string a;
	std::cout << "Enter string: "; std::cin >> a;


	std::string x, y, z;
	for (auto i = 0; i < a.size(); i++) {
		if (96 < a[i] && a[i] < 123) {
			x += a[i];
			continue;
		}
		if(64 < a[i] && a[i] < 91){
			y += a[i];
			continue;
		}
		z += a[i];
		
	}

	std::cout << "Lower-case: " << x << std::endl;
	std::cout << "Upper-case: " << y << std::endl;
	std::cout << "All other characters: " << z << std::endl;

	return 0;
}