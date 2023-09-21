#include "VirtualPet.h"
#include "Pokemon.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatomon.h"

int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;

	//Creating an instance of the Digimon class
	Digimon digidude("Digidude", "Water");
	Digimon opponent("Opposition", "Fire");
	digidude.useSpecialAttack(opponent);

	//Creating an instance of the Pikachu class
	Pikachu pika("Pikachu", "Electric Type", 100, 100);
	Pikachu badPika("Bad Pikachu", "Electric Type", 100, 100);
	pika.useElectricShock(badPika);

	//Creating an instance of the Gatomon class
	Gatomon gatoboy("Gatoboy", "Fire", 100);
	Gatomon gatoBadGuy("Opponent", "Water", 100);
	gatoboy.useCatClawAttack(gatoBadGuy);

	//Display information about Digimon pet
	cout << "***DIGIMON***" << endl;
	cout << "Name: " << digidude.getName() << endl;
	cout << "Happiness: " << digidude.getHappiness() << endl;
	cout << "Hunger: " << digidude.getHunger() << endl;
	cout << "Element: " << digidude.element << endl;
	cout << endl;

	//Display information about Pikachu pet
	cout << "***PIKACHU***" << endl;
	cout << "Name: " << pika.getName() << endl;
	cout << "Species: "<< pika.getSpecies() << endl;
	cout << "Health: " << pika.getHealth() << endl;
	cout << endl;

	//Display information about Gatomon pet
	cout << "***GATOMON***" << endl;
	cout << "Name: " << gatoboy.getName() << endl;
	cout << "Element: " << gatoboy.getElement() << endl;
	cout << "Happiness: " << gatoboy.getHappiness() << endl;
	cout << "Hunger: " << gatoboy.getHunger() << endl;
	cout << "Sharpness Level: " << gatoboy.catClawSharpness << endl;
	cout << endl;
	

	return 0;
}
