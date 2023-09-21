#ifndef GATOMON_H
#define GATOMON_H

#include <iostream>
#include <string>
using namespace std;

class Gatomon : public Digimon {
    private:
        int catClawSharpness;
	Gatomon(string name, string element, int happiness, int hunger, int catClawSharpness);

    public:
	void useCatClawAttack();
};

#endif
