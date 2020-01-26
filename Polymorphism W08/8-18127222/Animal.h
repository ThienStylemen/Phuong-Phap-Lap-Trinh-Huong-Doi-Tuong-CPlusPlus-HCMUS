#pragma once
#include<iostream>
using namespace std;
class Animal{
	
public:
	virtual int CompareWith(Animal *p) = 0;
	virtual int getSpeed() = 0;
	Animal();
	~Animal();
};

