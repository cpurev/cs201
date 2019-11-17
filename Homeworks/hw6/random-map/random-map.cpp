//random-map.cpp
//Chuluunbat Purev
//2019-11-17
//Testing random header

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

int main() {
	//Seed with real random value, if avaliable
	std::random_device rd;
	
	//Choose a randommean between 1 and 6
	std::default_random_engine e1(rd());
	std::uniform_int_distribution<int> uni_dis(1, 6);
	int mean = uni_dis(e1);
	std::cout << "Randomly-choose mean: " << mean << '\n';

	//Generate a normal distribution around that mean
	std::seed_seq seed2{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> norm_dis(mean, 2);

	std::map<int, int> hist;
	for (auto n = 0; n < 10000; n++)
		++hist[std::round(norm_dis(e2))];
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}

	return 0;
}