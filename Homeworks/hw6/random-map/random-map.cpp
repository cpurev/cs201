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
int randomBetweenU(const int& first, const int& last, std::default_random_engine& e1) {


	std::uniform_int_distribution<int> uni_dis(first, last);
	return std::round(uni_dis(e1));

}

//Normal distribution
//Randomly generate from mean and standart deviation
int randomBetweenN(const int& mean, const int& stdDev, std::default_random_engine& e2) {
	std::normal_distribution<> norm_dis(mean, stdDev);
	return norm_dis(e2);
}

//Using rand() function
//Randomly generate between first and last
int randomBetween(const int& first, const int& last) {
	return first + std::rand() / ((RAND_MAX + 1u) / last);
}

//Print map
void printDistribution(const std::map<int, int>& numbers) {
	for(auto x : numbers)
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
		<< x.first << ' ' << std::string(x.second/200 , '*') << '\n';

}

int main() {

	//Seed with real random value, if avaliable
	std::random_device rd;
	std::default_random_engine e1(rd());

	std::cout <<"Uniform Distributed"<< std::endl;

	std::map<int, int> disU;
	for (int n = 0; n < 10000; n++) ++disU[randomBetweenU(1, 6, e1)];
	printDistribution(disU);

	std::cout << std::endl;
	std::cout << "Normaly Distributed "<< std::endl;

	//Generate a normal distribution around that mean
	std::seed_seq seed2{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 e2(seed2);


	std::map<int, int> disN;
	for (int n = 0; n < 10000; n++) ++disN[randomBetweenN(3, 1, e2)];
	printDistribution(disN);

	std::cout << std::endl;
	std::cout <<"RAND() function distributed"<< std::endl;

	std::map<int, int> dis;
	for (int n = 0; n < 10000; n++) ++dis[randomBetween(1, 6)];
	printDistribution(dis);

	return 0;
}