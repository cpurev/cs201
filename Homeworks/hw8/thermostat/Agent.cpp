//Agent.cpp
//2019-12-7
//Chuluunbat Purev
//Agent body

#include "Agent.hpp"

Agent::Agent() {
	 tempA = 0; 
	 heat = false;
}

void Agent::act(const Enviroment& e) {
	e.setHeat(heat);
}

void Agent::percieve(const Enviroment& e) {
	tempA = e.getTemp();
}

void Agent::think(Simulator& sim) {

	//User wants it colder
	if ((tempA - sim.usrTemp) < 0)
		heat = false;

	//User wants it hoter
	else if ((tempA - sim.usrTemp) > 0)
		heat = true;

	//User doesnt want to change
	else
		heat = true;


}