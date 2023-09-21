#include <iostream>
#include <string>
#include "Digiomon.h"
using namespace std;

Digimon::Digimon(const string& name, int happiness, int hunger, const string& elem) : VirtualPet(name, happiness, hunger){
    element = elem;
}

void Digimon::useSpecialAttack(Digimon& digi) {
    cout << name << " uses their Special Attack on " << digi.name << "!" << endl;  
}

