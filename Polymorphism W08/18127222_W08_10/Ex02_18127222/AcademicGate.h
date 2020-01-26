#pragma once
#include"Gate.h"
#include"Saver.h"

class AcademicGate: public Gate{
private:
	int IQDemand = 30;
public:
	bool checkForSaver(Saver a);
public:
	AcademicGate();
	~AcademicGate();
};
