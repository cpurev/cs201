//Lab04
//Chuluunbat Purev
//2019-9-11
//Usage of for-loops

#include <iostream>

using std::cout;
using std::endl;

void excercise1() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0)
			cout << "Fizz" << endl;
		else
			cout << i << endl;
	}
}

void excercise2() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			cout << "Fizz Buzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	}
}
int main() {
	excercise1();
	excercise2();
	return 1;

}