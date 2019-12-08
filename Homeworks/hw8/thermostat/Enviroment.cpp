//Enviroment.cpp
//2019-12-7
//Chuluunbat Purev
//Enviroment body

#include "Enviroment.hpp"

Enviroment::Enviroment(int n) {
	tempE = n; htr = false;
}

void Enviroment::iteration() {

}

int Enviroment::getTemp() const{
	return tempE;
}

void Enviroment::setHeat(bool& a){
	htr = a;
}