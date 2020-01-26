#pragma once
#include"Animal.h"
class Human: public Animal {
	const int speed = 30;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Human();
	~Human();
};

