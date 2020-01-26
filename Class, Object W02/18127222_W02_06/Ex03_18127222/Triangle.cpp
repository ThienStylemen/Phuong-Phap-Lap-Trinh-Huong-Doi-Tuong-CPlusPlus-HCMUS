#include "Triangle.h"

Triangle::Triangle() {
	this->_a = Point(0, 0);
	this->_b = Point(0, 0);
	this->_c = Point(0, 0);
}

Triangle::~Triangle()
{
}

void Triangle::display() {
	cout << " points respectively is: \t ";
	this->_a.display();
	cout << "\t";
	this->_b.display();
	cout << "\t";
	this->_c.display();
}

Triangle::Triangle(Point a, Point b, Point c) {
	this->_a = a;
	this->_b = b;
	this->_c = c;
}

void Triangle::setTrianglge(Point a, Point b, Point c) {
	this->_a = a;
	this->_b = b;
	this->_c = c;
}

Point Triangle::getFirstPoint() {
	return this->_a;
}