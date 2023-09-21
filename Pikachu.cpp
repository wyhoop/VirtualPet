#include "Pikachu.h"
#include <iostream>
#include <string>
using namespace std;

Pikachu::Pikachu(const string& name,const string& species, int health, int eP) : Pokemon(name, species){
    electricPower = eP;
}

void Pikachu::useElectricShock(Pokemon& poke) {
	if(electricPower >= 5) {
	    cout << getName() << " hits " << poke.getName() << " with an Electric Shock!" << endl;
	    poke.takeDamage(electricPower);
	    electricPower -= 5;
	}

	else {
	    cout << getName() << " tries to use their Electric Shock but doesn't have enough electric power! Don't tease them though, they're sensitive about that subject." << endl;
	}
}
