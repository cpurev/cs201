//hw1
//Chuluunbat Purev
//2019-9-13
//Using input and output to print diamond and error handling.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 0;

	cout << "Enter the size of a diamond: ";

	//This is error handling loop when wrong input is entered it will keep looping till it gets the correct input.
	while (true) {
		while (!(cin >> n)) {//When cin function takes input and cant put it in a variable because its different type it just freezes.
			cin.clear();//To fix that we clear the function.
			cin.ignore(999, '\n');//And ignore all 999 characters in that line and start getting input from the \n line.
			cout << "Error: Try Again ~ ";
			continue;
		}
		if (n > 0)
			break;
		else
			cout << "Error: Try Again ~ ";
	}

	int space = n;

	//This loop prints the first half of diamond. Variable space is how many spaces to print till the next *.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "* ";
		}
		space--;
		cout << endl;
	}

	//This loop prints the second half of diamond. It goes exactly opposite way of the first loop.
	for (int i = n; i > 0; i--) {
		space++;
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}