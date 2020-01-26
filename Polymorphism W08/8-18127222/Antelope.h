#pragma once
#include"Animal.h"
class Antelope:public Animal{
	const int speed = 80;
public:
	int getSpeed();
	int CompareWith(Animal *p);
	Antelope();
	~Antelope();
};

