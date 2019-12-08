//Agent.hpp
//2019-12-19
//Thermostat agent
//Chuluunbat Purev

#include "Enviroment.hpp"

#ifndef AGENT_HPP
#define AGENT_HPP
class Agent {
public:
	void percieve(Enviroment e);
	void think();
	void act(Enviroment e);
private:
	int tempA;
};
#endif