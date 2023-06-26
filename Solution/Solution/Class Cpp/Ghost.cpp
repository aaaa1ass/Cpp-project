#include "../Class Header/Ghost.h"
#include <iostream>

Ghost::Ghost()
{
    hp = 50;
}

int Ghost::GetHP()
{
    return hp;
}

void Ghost::SetHP(int hp)
{
    this->hp = hp;
}

void Ghost::Skill()
{
    std::cout << "Lock Down" << std::endl;
}
