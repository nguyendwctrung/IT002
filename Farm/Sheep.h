#pragma once
#include "Animal.h"

class Sheep : public Animal
{
public:
	Sheep();
	~Sheep();
	void sound() override;
	int getMilk() override;
	int giveBirth() override;
	int getSpecies() override;
};

