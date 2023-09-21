#include <iostream>
#include <string>
#include "Digimon.h"

using namespace std;

Digimon::Digimon(const string& name, const string& elem) : VirtualPet(name){
    element = elem;
}

void Digimon::useSpecialAttack(Digimon& digi) {
    cout << getName() << " uses their Special Attack on " << digi.getName() << "!" << endl << endl;  
}

string Digimon::getElement() {
	return element;
}

