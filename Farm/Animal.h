#pragma once

class Animal
{
protected:
	int species;
public:
	Animal();
	~Animal();
	virtual void sound();
	virtual int getMilk();
	virtual int giveBirth();
	virtual int getSpecies();
};

