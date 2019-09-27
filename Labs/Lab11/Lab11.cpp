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

		if ('a' <= a[i] && a[i] <= 'z') {
			x += a[i];
			continue;
		}
		if('A' <= a[i] && a[i] <= 'Z'){
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