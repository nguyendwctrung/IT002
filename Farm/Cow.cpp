#include "Cow.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Cow::Cow() {
	species = 1;
}

Cow::~Cow() {

}

void Cow::sound() {
	cout << "moo moo" << endl;
}

int Cow::getMilk() {
	return rand() % 20;
}

int Cow::giveBirth() {
	return rand() % 10 + 1;
}

int Cow::getSpecies() {
	return species;
}