#include "Pokemon.h"

Pokemon::Pokemon(const string& pokemonName, const string& speciesName) : VirtualPet(pokemonName) {
	species = speciesName;
	health = 100;
}

void Pokemon::takeDamage(int damage) {
	health -= damage;

	if (health < 0) 
		health = 0;
}

string Pokemon::getSpecies() const {
	return species;
}

int Pokemon::getHealth() const {
	return health;
}

void Pokemon::makeSound() const {
	cout << "RAWR" << endl;
}

void Pokemon::increaseHappiness(int amount) {
	cout << "I OVERWROTE THE PROTECTED METHOD BUT CAN'T CHANGE HAPPINESS BC PRIVACY REASONS" << endl;
}
