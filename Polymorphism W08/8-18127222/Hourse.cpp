#include "Hourse.h"
int Hourse::getSpeed() {
	return this->speed;
}

int Hourse::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}

Hourse::Hourse()
{
}


Hourse::~Hourse()
{
}
