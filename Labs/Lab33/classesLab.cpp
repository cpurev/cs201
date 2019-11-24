//classesLab.cpp
//Chuluunbat Purev
//2019-11-20
//Classes

#include <string>
#include <iostream>

class Moo {
private:
	std::string _cow;
	int _times;
public:
	void printMoos() {
		std::cout << "The " << _cow << " moos " << _times << " times." << std::endl;
	}
	void setCows(std::string str) { _cow = str;}
	void setTimes(int n) { _times = n; }
	std::string getCows() { return _cow; }
	int getTimes() { return _times; }
	std::string toString() { return _cow+std::to_string(_times); }
};

int main() {

	Moo* A = new Moo();

	A->setCows("Cow");
	A->setTimes(8);

	A->printMoos();

	std::cout << std::endl;

	Moo B;

	B.setCows("Dog");
	B.setTimes(10);

	std::cout << "The " << B.getCows() << " moos " << B.getTimes() << " times." << std::endl;


	return 0;
}