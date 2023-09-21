#ifndef DIGIMON_H
#define DIGIMON_H

#include <iostream>
#include <string>
using namespace std;

class Digimon : public VirtualPet {
    public:
	Digimon(const string& name, int happiness, int hunger, const string& elem);
	void useSpecialAttack(Digimon& digi);

    private:
	string element;
};

#endif
