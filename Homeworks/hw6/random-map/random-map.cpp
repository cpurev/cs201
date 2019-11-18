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
int randomBetweenU(const int& first, const int& last, const std::default_random_engine& e) {
	std::uniform_int_distribution<int> uni_dis(first, last);
	return uni_dis(e);

}

//Normal distribution
//Randomly generate from mean and standart deviation
int randomBetweenN(const int& mean, const int& stdDev, const std::default_random_engine& e) {
	std::normal_distribution<> norm_dis(mean, stdDev);
	return norm_dis(e);
}

int randomBetween(const int& first, const int& last) {
	return rand() % last + first;
}

void printDistribution(const std::map<int, int>& numbers) {
	for(auto x : numbers)
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
		<< x.first << ' ' << std::string(x.second / 200, '*') << '\n';

}

int main() {
	//Seed with real random value, if avaliable
	std::random_device rd;
	std::default_random_engine e1(rd());

	std::cout << "Uniform mean: " << randomBetweenU(1, 6, e1) << '\n';

	//Generate a normal distribution around that mean

	std::seed_seq seed2{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 e2(seed2);

	std::cout << "Normal mean: " << randomBetweenN(1, 6, e2) << '\n';

	std::cout << "Rand mean: " << randomBetween(1, 6) << '\n';

	return 0;
}