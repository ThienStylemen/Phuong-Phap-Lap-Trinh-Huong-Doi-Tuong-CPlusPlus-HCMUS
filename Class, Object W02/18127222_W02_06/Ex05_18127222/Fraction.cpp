#include "Fraction.h"

int Fraction::getNu() {
	return this->_nu;
}
int Fraction::getDe() {
	return this->_de;
}

Fraction::Fraction() {
	this->_nu = 0;
	this->_de = 1;
}
void Fraction::setFraction(int nu, int de) {
	this->_nu = nu;
	this->_de = de;
}
void Fraction::display() {
	cout << this->_nu << "/" << this->_de;
}

Fraction::~Fraction()
{
}
