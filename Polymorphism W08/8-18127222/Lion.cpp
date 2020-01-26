#include "Lion.h"

int Lion::getSpeed() {
	return this->speed;
}
int Lion::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}

Lion::Lion()
{
}


Lion::~Lion()
{
}
