#include "AcademicGate.h"

bool AcademicGate::checkForSaver( Saver a){
	
	if (a.IQisHigherThanDemand(AcademicGate::IQDemand)) return true;
	return false;
}

AcademicGate::AcademicGate()
{
}


AcademicGate::~AcademicGate()
{
}
