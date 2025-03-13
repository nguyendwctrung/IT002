#pragma once
#include "Animal.h"

class Cow : public Animal 
{
public:
	Cow();
	~Cow();
	void sound() override;
	int getMilk() override;
	int giveBirth() override;
	int getSpecies() override;
};

