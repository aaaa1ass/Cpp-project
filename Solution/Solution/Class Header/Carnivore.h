#pragma once
#include "Animal.h"

class Carnivore : public Animal
{
public:
	void Action() final override;
};

