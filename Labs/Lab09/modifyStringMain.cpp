//modifyStringMain.cpp
//Chuluunbat Purev
//2019-9-23
//Main function of modifyString

#include"modifyString.hpp"

using std::cout;
using std::string;

int main() {
	string stringInMain = "Hello";
	cout << "lenght: " << modifyString(stringInMain, 0) << std::endl;
	cout << "the string: " << stringInMain << std::endl;

	cout << std::endl;

	cout << "lenght: " << modifyString(stringInMain, 1) << std::endl;
	cout << "the string: " << stringInMain << std::endl;

	cout << std::endl;

	cout << "lenght: " << modifyString(stringInMain, 2) << std::endl;
	cout << "the string: " << stringInMain << std::endl;

	cout << std::endl;

	int n = 3;
	cout << "modified string: " << modifyStringI(stringInMain, n) << std::endl;
	cout << "the string: " << stringInMain << std::endl;

	return 0;
}