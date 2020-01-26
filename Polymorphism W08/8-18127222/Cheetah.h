#pragma once
#include"Animal.h"
class Cheetah: public Animal {
	const int speed = 100;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Cheetah();
	~Cheetah();
};

