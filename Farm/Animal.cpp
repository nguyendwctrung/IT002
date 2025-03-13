#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {
	species = 0;
}

Animal::~Animal() {

}

void Animal::sound() {
	cout << "some sound" << endl;
}

int Animal::getMilk() {
	return 0;
}

int Animal::giveBirth() {
	return 0;
}

int Animal::getSpecies() {
	return 0;
}