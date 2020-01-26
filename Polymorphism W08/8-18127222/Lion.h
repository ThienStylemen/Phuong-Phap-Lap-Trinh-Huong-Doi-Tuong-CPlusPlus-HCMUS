#pragma once
#include"Animal.h"
class Lion: public Animal {
	const int speed = 70;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Lion();
	~Lion();
};

