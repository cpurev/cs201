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
	bool stale = false;
};
#endif // !SIM_HPP
