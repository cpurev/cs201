//Enviroment.cpp
//2019-12-7
//Chuluunbat Purev
//Enviroment body

#include "Enviroment.hpp"

Enviroment::Enviroment(int n) {
	tempE = n;
}

void Enviroment::iteration() {

}

int Enviroment::getTemp() const{
	return tempE;
}

bool Enviroment::setHeat(const bool& a) const {
	htr = a;
}