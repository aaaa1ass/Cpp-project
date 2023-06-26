#pragma once
#include "Unit.h"

class Marine : public Unit
{
private: 
	int hp;
public:
	Marine();
	int GetHP() override;
	void virtual SetHP(int hp) override;
	void Skill() override;
};

