//Enviroment.hpp
//2019-12-7
//Chuluunbat Purev
//Enviroment thermostat

#ifndef ENV_HPP
#define ENV_HPP
class Enviroment {
public:
	Enviroment(int num);
	void iteration();
private:
	int temp;
};
#endif // !ENV_HPP
