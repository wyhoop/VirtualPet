#ifndef DIGIMON_H
#define DIGIMON_H

#include <iostream>
#include <string>
#include "VirtualPet.h"
using namespace std;

class Digimon : public VirtualPet {
    public:
	Digimon(const string& name, const string& elem);
	void useSpecialAttack(Digimon& digi);

    private:
	string element;
};

#endif
