#include "Gatomon.h"
#include <iostream>
#include <string>
using namespace std;

Gatomon::Gatomon(const string& name, const string& element, int clawSharpness) : Digimon(name, element) {
	catClawSharpness = clawSharpness;
}

void Gatomon::useCatClawAttack(Gatomon& gato) {
	if(catClawSharpness > 5){
		cout << getName() << " hits " << gato.getName() << " with their signature Cat Claw Attack!" << endl << endl;

	catClawSharpness -= 5;
	}

	else
		cout << getName() << " needs to spend some more time sharpening their claws... they are unable to hit " << gato.getName() << "  with that attack..." << endl << endl;
}

int Gatomon::getCatClawSharpness() {
	return catClawSharpness;
}
