#ifndef DIGIMON_H
#define DIGIMON_H

#include <iostream>
#include <string>
using namespace std;

class Digimon : public VirtualPet {
    private:
        string element;

    public:
	Digimon(const string& name, int happiness, int hunger, const string& element);
	void useSpecialAttack(Digimon& digi);

};

#endif
