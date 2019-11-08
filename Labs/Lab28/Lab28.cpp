//Lab28.cpp
//Chuluunbat Purev
//2019-11-8
//Files

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

	
	//std::ifstream fin("hello.txt");

	std::ofstream fout("hello.txt");
	if (!fout)
		return 0;

	int n = 1;

	for (auto i = 0; i < 10; i++){
		for(auto j = 1; j <= 10; j++){
			fout << std::setw(10) << n;
			n++;
		}
		fout << "\n";
	}

	fout.close();

	return 0;
}