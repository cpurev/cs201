/**
 * @file     insertion_sort.cpp
 * @author   Student Name
 * @version  Feb 17, 2019
 * John Quan
 * @brief
 */

#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& data) {

	int temp = 0;
	int j;

	// For each element, with the second element as the current element
	// Temporarily save the current element
	for (auto i = 1; i < data.size(); i++) {

		temp = data[i];
		j = i - 1;

		// Now, we need to move each element that is bigger than the temporary.
		// If the previous element is bigger than the current element
		// Make a new index j for decrementing equal to the current index
		// While j isn't zero and the previous element is greater than the
		//        temporarily saved element
		// Move the previous element into the current element
		// Decrement j
		while (j >= 0 && data[j] > temp)
		{
			data[j + 1] = data[j];
			j--;
		}

		// We found where temp goes.
		// Move it into the element at j
		data[j + 1] = temp;
	}
}

bool isEqual(const std::vector<int>& v1, const std::vector<int>& v2) {
	// compare lengths
	if (v1.size() != v2.size()) {
		return false;
	}
	// compare elements
	for (unsigned long i = 0; i < v1.size(); ++i) {
		if (v1[i] != v2[i]) {
			return false;
		}
	}
	// must be the same
	return true;
}

void printVector(const std::vector<int>& vec) {
	for (const auto& element : vec) {
		std::cout << element << ' ';
	}
}