#pragma once
#include"Gate.h"
#include"Saver.h"
class PowerGate : public Gate {
	int powerDemand = 30;
public:
	bool checkForSaver(Saver a);
public:
	PowerGate();
	~PowerGate();
};
