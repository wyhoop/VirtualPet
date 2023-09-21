#ifndef PIKACHU_H
#define PIKACHU_H

#include <iostream>
#include <string>
using namespace std;

class Pikachu : public Pokemon {
	private:
	    int electricPower;

	public:
	    void useElectricShock(Pokemon& poke);
	    Pikachu(const string& name, const string& species, int health, int electricPower);


};
#endif 
