//Source.cpp
//Chuluunbat Purev
//2019-10-30
//Using algorithm methods

#include <algorithm>
#include <iostream>
#include <vector>


void printVec(const std::vector<int>& a) { for (const auto& v : a) { std::cout << v << ' '; } }

int main() {

	std::vector<int> vctr{5, 1, 3, 10, 2, 6, 8, 4, 7, 11, 15};

	std::cout << "The original vector: "; printVec(vctr); std::cout << std::endl;

	std::cout << std::endl;
	std::sort(vctr.begin(), vctr.end());

	std::cout << "The sorted vector: "; printVec(vctr); std::cout << std::endl;

	std::cout << std::endl;
	std::reverse(vctr.begin(), vctr.end());

	std::cout << "The reversed vector: "; printVec(vctr); std::cout << std::endl;

	std::cout << std::endl;
	std::fill(vctr.end()-3, vctr.end(), 99);

	std::cout << "Filled last 3 elements to 99 using fill: "; printVec(vctr); std::cout << std::endl;

	return 0;
}