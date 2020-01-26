#pragma once
#include"Game.h"
#include"Gate.h"
class Saver{
private:
	int IQ;
	static int money;
	static int power;
public:
	Saver CreateInformationForSaver();
	bool IQisHigherThanDemand(int IQDemand);
	bool isEnoughPower(int powerDemand);
	bool isEnoughMoney(int moneyDemand);
	Saver(int IQ, int money, int power);
	Saver();
	~Saver();
};

