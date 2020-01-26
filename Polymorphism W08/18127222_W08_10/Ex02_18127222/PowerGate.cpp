#include "PowerGate.h"

bool PowerGate::checkForSaver(Saver a) {
	if (a.isEnoughPower(PowerGate::powerDemand)) return true;
	return false;
}

PowerGate::PowerGate()
{
}


PowerGate::~PowerGate()
{
}
