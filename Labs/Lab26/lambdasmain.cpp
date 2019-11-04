/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	std::vector<std::pair<size_t, std::string>> v;

	for (auto x : WIKIPEDIA_CPP) {
		v.push_back({ x.length(), x });
	}

	std::cout << (printVectorPairs(v.begin(), v.end()));

	std::cout << std::endl << "Sorted" << std::endl;
	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	std::sort(v.begin(), v.end(), [](std::pair<size_t, std::string> a, std::pair<size_t, std::string> b) {return a.first < b.first; });
	std::cout << (printVectorPairs(v.begin(), v.end()));

	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector

	std::cout << std::endl << "Ascending Sorted" << std::endl;

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.

	std::sort(v.begin(), v.end(), [](std::pair<size_t, std::string> a, std::pair<size_t, std::string> b) {return a.first > b.first; });
	std::cout << (printVectorPairs(v.begin(), v.end()));

	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector

	std::cout << std::endl << "Lenght Sorted" << std::endl;

	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.

	auto it = std::find_if(v.begin(), v.end(), [](std::pair<size_t, std::string> a) {return a.first > 15; });
	int n = 0;
	for (auto x : v) {
		if (x.first > 15)
			n++;
	}
	std::cout << (printVectorPairs(it, it+n));


	return 0;
}