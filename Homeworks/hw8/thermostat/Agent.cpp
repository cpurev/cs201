//Agent.cpp
//2019-12-7
//Chuluunbat Purev
//Agent body

#include "Agent.hpp"

//Constructor for starting values
Agent::Agent() {
	 tempA = 0; 
	 heat = false;
}

//Determine whether the enviroment needs to be warmer or colder
void Agent::act(Enviroment& e) {
	e.setHeat(heat);
}

//Get the temperature from the enviroment
void Agent::percieve(const Enviroment& e) {
	tempA = e.getTemp();
}

//Determine the whether to increase the heater or not
//According to users desired temperature
void Agent::think(Simulator& sim) {

	//User wants it colder
	if ((tempA - sim.usrTemp) > 0)
		heat = false;

	//User wants it hoter
	else if ((tempA - sim.usrTemp) < 0)
		heat = true;

	//User doesnt want to change
	else {
		heat = false;
		sim.stale = true;
	}

}