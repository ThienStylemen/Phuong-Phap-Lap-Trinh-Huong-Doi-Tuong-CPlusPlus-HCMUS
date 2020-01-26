#include"Triangle.h"

Triangle::Triangle() {
	this->_a = new Point(0,0);
	this->_b = new Point(0,0);
	this->_c = new Point(0,0);
}

Triangle::Triangle(const Triangle& a) {
	this->_a = new Point(*a._a);
	this->_b = new Point(*a._b);
	this->_c = new Point(*a._c);
}

Triangle::Triangle(Point a, Point b, Point c) {
	this->_a = new Point(a);
	this->_b = new Point(b);
	this->_c = new Point(c);
}
Triangle::~Triangle() {
	delete this->_a;
	delete this->_b;
	delete this->_c;
}

void Triangle::display() {
	this->_a->display();
	this->_b->display();
	this->_c->display();
}

float Triangle::Perimeter() {
	float e1= this->_a->CalcDistanceTo(this->_b);
	float e2 = this->_b->CalcDistanceTo(this->_c);
	float e3 = this->_c->CalcDistanceTo(this->_a);
	return e1 + e2 + e3;
}

float Triangle::Superficiality() {
	float e1 = this->_a->CalcDistanceTo(this->_b);
	float e2 = this->_b->CalcDistanceTo(this->_c);
	float e3 = this->_c->CalcDistanceTo(this->_a);
	float p =( (e1 + e2 + e3) / 2);
	return sqrt(p*(p - e1)*(p - e2)*(p - e3));
}