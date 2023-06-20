#pragma once
#include <iostream>
#include "Device.h"

class Keyboard : public virtual Device
{
private:
	char character;
public:
	int price;

	Keyboard();
	void Input(char);
};

