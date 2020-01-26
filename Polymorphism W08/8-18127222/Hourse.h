#pragma once
#include"Animal.h"
class Hourse:public Animal{
	const int speed = 60;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Hourse();
	~Hourse();
};

