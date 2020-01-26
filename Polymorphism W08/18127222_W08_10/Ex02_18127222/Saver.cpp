#include "Saver.h"

Saver::Saver(int IQ, int money, int power) {
	this->IQ = IQ;
	this->money = money;
	this->power = power;
}

bool Saver::IQisHigherThanDemand(int IQDemand) {
	if (Saver::IQ >= IQDemand) return true;
	return false;
}

bool Saver::isEnoughPower(int powerDemand) {
	if (Saver::power >= powerDemand) {
		Saver::power = Saver::power - powerDemand;
		return true;
	}
	return false;
}

bool Saver::isEnoughMoney(int moneyDemand) {
	if (Saver::money >= moneyDemand) {
		Saver::money = Saver::money - moneyDemand;
		return true;
	}
	return false;
}

Saver Saver::CreateInformationForSaver() {
	cout << "please input a saver information:" << endl;
	cout << "please input IQ of the saver: ";
	cin >> this->IQ;
	cout << "please input money of the saver: ";
	cin >> this->money;
	cout << "please input power of the saver: ";
	cin >> this->power;
	return *this;
}


Saver::Saver()
{
}


Saver::~Saver(){

}
