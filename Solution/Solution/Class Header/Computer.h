#pragma once
#include "../Class Header/Mouse.h"
#include "../Class Header/Keyboard.h"

class Computer : public Mouse, public Keyboard
{
public:
	Computer();
};

