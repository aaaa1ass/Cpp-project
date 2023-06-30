#pragma once

#include <iostream>

class Weapon
{
protected:
	int m_attack;
	float m_criticalHit;
	const int m_price;

public:
	Weapon(int attack, float criticalHit, int price) : m_attack(attack), m_criticalHit(criticalHit), m_price(price) { };
	virtual ~Weapon();

	virtual void Stat();
	void Attack();

};

