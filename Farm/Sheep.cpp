#include "Sheep.h"
#include <iostream>

using namespace std;

Sheep::Sheep() {
	species = 2;
}

Sheep::~Sheep() {

}

void Sheep::sound() {
	cout << "bee bee" << endl;
}

int Sheep::getMilk() {
	return rand() % 5;
}

int Sheep::giveBirth() {
	return rand() % 10 + 1;
}

int Sheep::getSpecies() {
	return species;
}