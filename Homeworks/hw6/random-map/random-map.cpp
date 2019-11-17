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


//Uniform distribution
//To randomly generate between first and last
int randomBetween(const int& first, const int& last, const std::default_random_engine& e) {
	std::uniform_int_distribution<int> uni_dis(first, last);
	return uni_dis(e);

}

//Normal distribution
//Randomly generate from mean and standart deviation
int randomBetweenN(const int& mean, const int& stdDev, const std::default_random_engine& e) {
	std::normal_distribution<> norm_dis(mean, stdDev);
	return norm_dis(e);
}

int main() {
	//Seed with real random value, if avaliable
	std::random_device rd;
	std::default_random_engine e1(rd());
	
	//Choose a random mean between 1 and 6
	int mean = randomBetween(1, 6, e1);
	std::cout << "Uniform mean: " << mean << '\n';

	//Generate a normal distribution around that mean

	std::seed_seq seed2{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 e2(seed2);

	std::map<int, int> hist;
	for (auto n = 0; n < 10000; n++)
		++hist[std::round(randomBetweenN(mean, 2, e2))];
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}

	return 0;
}