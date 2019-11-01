//main.cpp
//Chuluunbat Purev
//2019-11-1
//Mismatched vectors

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::vector<int> A{ 1, 2, 3, 4, 5 };
	std::vector<int> B{ 1, 2, 3, 4, 5 };
	std::vector<int> C{ 1, 2, 3, 4, 5 };


	auto msmtch = std::mismatch(A.begin(), A.end(), B.begin());

	if (msmtch.first == A.end())
		std::cout << "The two lists are same";
	else {
		std::cout << "The first mismatched items are: ";
		std::cout << *msmtch.first << " And " << *msmtch.second;
	}

	std::cout << std::endl;


	auto msmtch1 = std::mismatch(A.begin(), A.end(), C.begin());

	if (msmtch1.first == A.end())
		std::cout << "The two lists are same";
	else
		std::cout << *msmtch1.first << " And " << *msmtch1.second;


	std::cout << std::endl;

	return 0;
}