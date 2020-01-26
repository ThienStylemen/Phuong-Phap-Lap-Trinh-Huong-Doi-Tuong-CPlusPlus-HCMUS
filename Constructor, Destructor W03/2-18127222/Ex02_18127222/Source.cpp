#include"Header.h"

void Monomial::input() {
	cout << "please input the coefficient and exponent alternately";
	cin >> this->A;
	cin >> this->N;
}
void Monomial::output() {
	cout << "\n here is your monomial: ";
	cout << this->A << "*x" << "^" << this->N;
}
int Monomial::getCoefficient() {
	return this->A;
}
int Monomial::getExponent() {
	return this->N;
}
void Monomial::setCoefficient(int coefficient) {
	this->A = coefficient;
}
void Monomial::setExponent(int exponent) {
	this->N = exponent;
}
int Monomial::calculateValue(int x) {
	return A * pow(x, this->N);
}
Monomial Monomial::calculateDerive() {
	Monomial result;
	result.A = this->A*this->N;
	result.N = this->N - 1;
	return result;
}
Monomial Monomial::addWithSameComponent(Monomial a) {
	Monomial result;
	if (this->N == a.N) {
		result.A = this->A + a.A;
		result.N = this->N;
		return result;
	}
	else
		cout << " please use another method";
}
int Monomial::compareWithAnotherMonomial(Monomial a, int x) {
	int aResult = a.calculateValue(x);
	int thisResult = this->calculateValue(x);
	if (thisResult > aResult) return 1;
	else if (thisResult < aResult) return -1;
	else return 0;
}
Monomial Monomial::mulToAnotherMonomial(Monomial a) {
	Monomial result;
	result.A = this->A * a.A;
	result.N = this->N + a.N;
	return result;
}