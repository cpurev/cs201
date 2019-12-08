//Simulator.hpp
//2019-12-7
//Chuluunbat Purev
//Thermostat simulator

#ifndef SIM_HPP
#define SIM_HPP
class Simulator {
public:
	Simulator() { usrTemp = 0; }
	int askOwner();
	int usrTemp;
};
#endif // !SIM_HPP
