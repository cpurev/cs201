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
	int getTemp() const;
	bool setHeat(const bool& a) const;
private:
	int tempE;
	bool htr;
};
#endif // !ENV_HPP
