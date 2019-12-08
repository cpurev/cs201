//Agent.hpp
//2019-12-19
//Thermostat agent
//Chuluunbat Purev

#include "Enviroment.hpp"
#include "Simulator.hpp"

#ifndef AGENT_HPP
#define AGENT_HPP
class Agent {
public:
	Agent();
	void percieve(const Enviroment& e);
	void think(Simulator& sim);
	void act(const Enviroment& e);
	int tempA;
	bool heat;
};
#endif