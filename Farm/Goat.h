#pragma once
#include "Animal.h"

class Goat : public Animal
{
public:
	Goat();
	~Goat();
	void sound() override;
	int getMilk() override;
	int giveBirth() override;
	int getSpecies() override;
};

