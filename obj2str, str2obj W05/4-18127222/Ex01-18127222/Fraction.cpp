#include "Fraction.h"

Fraction::Fraction() {
	this->num = 0;
	this->den = 1;
}

Fraction::Fraction(int num, int den) {
	this->num = num;
	this->den = den;
}

Fraction Fraction::operator-(const Fraction &a) {
	Fraction divide;
	if (this->den == a.den) {
		divide.num = this->num - a.num;
		divide.den = this->den;
	}
	else {
		divide.num = this->num*a.den - this->den*a.num;
		divide.den = this->den = this->den*a.den;
	}
	return divide;
}

Fraction Fraction::operator+(const Fraction &a) {
	Fraction sum;
	if (this->den == a.den) {
		sum.num = this->num + a.num;
		sum.den = this->den;
	}
	else {
		sum.num = this->num*a.den + this->den*a.num;
		sum.den = this->den = this->den*a.den;
	}
	return sum;
}

bool Fraction::operator<(Fraction a) {
	if (this->den == a.den) {
		if (this->num < a.num) return true;
		else return false;
	}
	else{
		if (this->num* a.den < this->den*a.num)  return true;
	}
	return false;
}

bool Fraction::operator>(Fraction a) {
	if (this->den == a.den) {
		if (this->num > a.num) return true;
		else return false;
	}
	else {
		if (this->num* a.den > this->den*a.num)  return true;
	}
	return false;
}
bool Fraction::operator==(Fraction a) {
	if (this->den == a.den) {
		if (this->num == a.num) return true;
		else return false;
	}
	else {
		if (this->num* a.den == this->den*a.num)  return true;
	}
	return false;
}
bool Fraction::operator>=(Fraction a) {
	if (this->den == a.den) {
		if (this->num >= a.num) return true;
		else return false;
	}
	else {
		if (this->num* a.den >= this->den*a.num)  return true;
	}
	return false;
}
bool Fraction::operator<=(Fraction a) {
	if (this->den == a.den) {
		if (this->num <= a.num) return true;
		else return false;
	}
	else {
		if (this->num* a.den <= this->den*a.num)  return true;
	}
	return false;
}
bool Fraction::operator!=(Fraction a) {
	if (this->den == a.den) {
		if (this->num != a.num) return true;
		else return false;
	}
	else {
		if (this->num* a.den != this->den*a.num)  return true;
	}
	return false;
}
Fraction& Fraction::operator++() {
	this->num = this->num+this->den;
	this->den = this->den;
	return *this;
}
Fraction& Fraction::operator++(int x) {
	Fraction temp = *this;
	this->num += this->den;
	return temp;
}
Fraction& Fraction::operator--() {
	this->num = this->num - this->den;
	this->den = this->den;
	return *this;
}
Fraction::operator int() {
	return this->num / this->den;
}
Fraction::operator float() {
	return this->num*1.0 / this->den;
}
ostream& operator <<(ostream &os, const Fraction &p) {
	os << p.num << "/" << p.den;
	return os;
}
istream& operator>>(istream &is, Fraction &p) {
	is >> p.num >> p.den;
	return is;
}
Fraction::~Fraction() {

}
