//Enviroment.hpp
//2019-12-7
//Chuluunbat Purev
//Enviroment thermostat

#ifndef ENV_HPP
#define ENV_HPP
class Enviroment {
public:
	Enviroment(int num);
	int iteration();
	int getTemp() const;
	void setHeat(bool& a);
	bool heater();
private:
	int tempE;
	bool htr;
};
#endif // !ENV_HPP
