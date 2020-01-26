#include "Human.h"
int Human::getSpeed() {
	return this->speed;
}

int Human::CompareWith(Animal *p) {
	if (this->speed > p->getSpeed())
		return 1;
	else if (this->speed == p->getSpeed()) return 0;
	else return -1;
}
Human::Human()
{
}


Human::~Human()
{
}
