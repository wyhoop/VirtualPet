#include "VirtualPet.h"

VirtualPet::VirtualPet(const string& petName) {
	name = petName;
	happiness = 50;
	hunger = 50;
}


void VirtualPet::feed() {
	increaseHappiness(10);
	decreaseHunger(20);
}


void VirtualPet::play() {
	increaseHappiness(20);
	increaseHunger(10);
}


void VirtualPet::makeSound() const {
	cout << "Generic pet sound." << endl;
}


string VirtualPet::getName() const {
	return name;
}


int VirtualPet::getHappiness() const {
	return happiness;
}


int VirtualPet::getHunger() const {
       return hunger;
}


void VirtualPet::increaseHappiness(int amount) {
	happiness += amount;

	if (happiness > 100) 
		happiness = 100;
}


void VirtualPet::decreaseHappiness(int amount) {
	happiness -= amount;

	if (happiness < 0) 
		happiness = 0;
}


void VirtualPet::increaseHunger(int amount) {
	hunger += amount;

	if (hunger > 100)
		hunger = 100;
}


void VirtualPet::decreaseHunger(int amount) {
	hunger -= amount;

	if (hunger < 0)
		hunger = 0;
}















