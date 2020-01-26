#include "Cheetah.h"
int Cheetah::getSpeed() {
	return this->speed;
}
int Cheetah::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}


Cheetah::Cheetah()
{
}


Cheetah::~Cheetah()
{
}
