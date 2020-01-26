#include "Antelope.h"

int Antelope::getSpeed() {
	return this->speed;
}
int Antelope::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}

Antelope::Antelope()
{
}


Antelope::~Antelope()
{
}
