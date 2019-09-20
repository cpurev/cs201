//lab8.cpp
//Chuluunbat Purev
//2019-9-20
//Body of functions of lab8.hpp file

#include"lab8.hpp"
#include"intio.hpp"
#include<iostream>

//doInput()
int doInput() {
	
	return getInt();
}

//compute(int n)
int compute(int n) {
	//Check if its 0 or less.
	if (n <= 0)
		return 0;
	//If its positive integer
	//Find number of integers that divises n which are less than n 
	int a=0;
	if (n > 0) {
		for (int i = 1; i < n; i++) {
			if (n % i == 0)
				a++;
		}
	}
	return a;
	//return n * n; //First assignment 
}