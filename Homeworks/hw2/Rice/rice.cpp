//rice.cpp
//Chuluunbat Purev
//2019-9-22
//exponentialy growing number

#include <iostream>;

using std::cout;
using std::cin;
using std::endl;

int main() {
	int sumI = 1;
	double sumD = 1;
	int a = 1000;

	//Loop for int
	for (int i = 1; i <= 64; i++) {
		sumI *= 2;
		if (sumI >= a) {
			cout << "Number of squares for atleast " << a << " grains of rice: " << i << endl;
			a *= 1000;
		}
		if (sumI >= INT_MAX/2) {
			cout << "Max squares int can hold is: " << i+1 << endl;
			break;
		}
	}

	//Loop for double
	int i = 1;

	while(true) {
		i++;
		sumD *= 2;
		if (sumD >= DBL_MAX ) {
			cout << "Max squares double can hold is: " << i  << endl;
			break;
		}
	}
	

	return 0;
}