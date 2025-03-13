#include "Goat.h"
#include <iostream>

using namespace std;

Goat::Goat() {
	species = 3;
}

Goat::~Goat() {

}

void Goat::sound() {
	cout << "mee mee" << endl;
}

int Goat::getMilk() {
	return rand() % 10;
}

int Goat::giveBirth() {
	return rand() % 10 + 1;
}

int Goat::getSpecies() {
	return species;
}