#include "Dog.h"

int Dog::getSpeed() {
	return this->speed;
}

int Dog::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}

Dog::Dog()
{
}


Dog::~Dog()
{
}
