#ifndef GATOMON_H
#define GATOMON_H

#include <iostream>
#include <string>
#include "Digimon.h"
using namespace std;

class Gatomon : public Digimon {
    private:
        int catClawSharpness;

    public:
	void useCatClawAttack(Gatomon& gati);
	Gatomon(const string& name, const string& element, int catClawSharpness);
	int getCatClawSharpness();
};

#endif
