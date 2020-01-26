#include "Monomial.h"

Monomial Monomial::operator+(const Monomial& a) {
	Monomial b;
	if (this->n == a.n) {
		b.n = this->n;
		b.a = this->a + a.a;
	}
	return b;
}
Monomial::Monomial(int a, int n) {
	this->a = a;
	this->n = n;
}
ostream& operator <<(ostream &os, const Monomial& m) {
	os << m.a << "x^" << m.n;
	return os;
}
istream& operator>>(istream &is, Monomial &m) {
	is >> m.a >> m.n;
	return is;
}
bool Monomial::operator<(Monomial a) {
	if (this->n == a.n && this->a < a.a)
		return true;
	return false;
}
bool Monomial::operator>(Monomial a) {
	if (this->n == a.n && this->a > a.a)
		return true;
	return false;
}
bool Monomial::operator==(Monomial a) {
	if (this->n == a.n && this->a == a.a)
		return true;
	return false;
}
bool Monomial::operator>=(Monomial a) {
	if (this->n == a.n && this->a >= a.a)
		return true;
	return false;
}
bool Monomial::operator<=(Monomial a) {
	if (this->n == a.n && this->a <= a.a)
		return true;
	return false;
}
bool Monomial::operator!=(Monomial a) {
	if (this->n == a.n && this->a <= a.a)
		return true;
	return false;
}

Monomial Monomial::operator=(const Monomial& a) {
	this->a = a.a;
	this->n = a.n;
	return *this;
}
Monomial Monomial::operator+=(const Monomial& a) {
	if (this->n == a.n) {
		this->a += a.a;
	}
	return *this;
}
Monomial Monomial::operator*=(const Monomial& a) {
	this->a *= a.a;
	this->n *= a.n;
	return *this;
}
Monomial& Monomial::operator++() {
	this->a += + 1;
	return *this;
}
Monomial Monomial::operator++(int x) {
	Monomial temp = *this;
	temp.a += 1;
	return temp;
}
Monomial& Monomial::operator--() {
	this->a = this->a - 1;
	return *this;
}
Monomial Monomial::operator--(int x) {
	Monomial temp = *this;
	temp.a = this->a - 1;
	return temp;
}
Monomial Monomial::operator!() {
	this->a = this->a * this->n;
	this->n -= 1;
	return *this;
}
Monomial::Monomial(){

}


Monomial::~Monomial()
{
}
