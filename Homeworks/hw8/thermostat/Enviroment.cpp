//Enviroment.cpp
//2019-12-7
//Chuluunbat Purev
//Enviroment body

#include "Enviroment.hpp"

//Constructor for the starting values
Enviroment::Enviroment(int n) {
	tempE = n; htr = false;
}

//Get heater state
bool Enviroment::heater() {
	return htr;
}

//According to heater state change the temperature
int Enviroment::iteration() {
	if (htr == true)
		return tempE++;
	else
		return tempE--;
}

//Get the temperature of the enviroment
int Enviroment::getTemp() const{
	return tempE;
}

//Set the heater state
void Enviroment::setHeat(bool& a){
	htr = a;
}