#pragma once
#include "Weapon.h"

class Sword : public Weapon
{
public:
	Sword() : Weapon(10, 5.5f, 1200) {};
	~Sword();
	virtual void Stat();
	void Attack();
};

