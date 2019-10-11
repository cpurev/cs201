//collatz.cpp
//Chuluunbat Purev
//2019-9-28
//Collatz function

#include <iostream>

//Recursive function printing all the integers in the sequence
bool collatz(int n) {
	std::cout << n << " ";
	if (n == 1)
		return true;
	if (n % 2 == 0)
		collatz(n / 2);
	else
		collatz((n * 3) + 1);
}

int main() {
	int n;
	std::cout << "This program prints collatz sequence" << std::endl;

	//Infinite loop till positive interger is entered
	//No type checking
	while (true) {
		std::cout << "Enter an integer positive integer: "; std::cin >> n;
		if (n <= 0)
			continue;
		break;
	}

	collatz(n);
	return 0;
}