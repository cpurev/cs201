//thermostat.cpp
//2019-12-7
//Chuluunbat Purev
//Thermostat

#include "Agent.hpp"
#include "Simulator.hpp"
#include "Enviroment.hpp"

#include <sstream>
#include <iostream>

//Right inpute checker
int inptChkr() {
	std::istringstream iss;
	std::string str;
	int temp;

	std::getline(std::cin, str);
	iss.str(str);
	if (!(iss >> temp))
		return 0;
	if (!(16 < temp && temp < 27))
		return 0;

	return temp;
}


int main() {
	//String to store input
	std::string str; 

	//int to parse input to
	int temp;

	Agent ag;
	Simulator sim;

	std::cout << "Current Temperature\tEnter reasonable number between 17C and 26C\n\t0 to exit ~ "; 

	//Input check
	do {
		temp = inptChkr();
	} while (temp == 0);

	//Init env
	Enviroment env(temp);

	//Infite loop till user exits
	while (true) {
		
		//Env is changing every loop so we perciece it everytime
		ag.percieve(env);

		//Ask user for the desired temperature
		//Thinks if correct input
		switch (sim.askOwner()) {
			case -1: continue;
			case 0: return -1;
			case 1: ag.think(sim); break;
		}

		//Act on the thought
		ag.act(env);

		//Loop 10 times to change the temperature and then ask the user
		for (auto i = 0; i < 10; i++) {

			//Print the heater condition
			if (env.heater())
				std::cout << "Heater is on:";
			else
				std::cout << "Heater is off:";

			//If the desired temperature is achieved then we enter
			//stale state where we print the desired temp
			if (!sim.stale)
				std::cout << env.iteration() << '\n';
			else
				std::cout << env.getTemp() << '\n';

			//Think and act on the temperature change
			//Think defines the states
			//Act changes the states accros the other objects
			//We also percieve here since we dont in this looop
			ag.percieve(env);
			ag.think(sim);
			ag.act(env);
		}

	}


	return 0;

}