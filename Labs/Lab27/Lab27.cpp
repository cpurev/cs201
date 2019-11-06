//Lab27.cpp
//Chuluunbat Purev
//2019-11-6
//Pseudorandom number

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main() {
	
	//Main program
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> dis(1, 2);

	int hd = 0;

	for (auto i = 0; i < 1000; i++) {
		if (1 == dis(gen))
			hd++;
	}

	std::cout << "A coin is flipped 1000 times here are the results: " << std::endl;

	std::cout << "Heads: " << hd << "\tTails: " << 1000 - hd;

	std::cout << std::endl;

	//Additional 2
	std::vector<int> v;
	for (auto i = 1; i <= 100; i++)
		v.push_back(i);

	std::shuffle(begin(v), end(v), gen);

	for (auto x : v)
		std::cout << x << " ";


	return 0;
}