#include "Gatomon.h"
#include <iostream>
#include <string>
using namespace std;

Gatomon::Gatomon(const string& name, const string& element, int happiness, int hunger, int clawSharpness) : Digimon(name, element, happiness, hunger) {
	catClawSharpness = clawSharpness;
}

void Gatomon::useCatClawAttack(Gatomon& gato) {
	if(clawSharpness > 5){
		cout << name << " hits " << gato.name << " with their signature Cat Claw Attack!" << end;

	clawSharpness -= 5;
	}

	else
		cout << name << " needs to spend some more time sharpening their claws... they are unable to hit " << gato.name << "  with that attack..." << endl;
}

