#pragma once
#include"Animal.h"
class Dog: public Animal{
	const int speed = 60;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Dog();
	~Dog();
};

