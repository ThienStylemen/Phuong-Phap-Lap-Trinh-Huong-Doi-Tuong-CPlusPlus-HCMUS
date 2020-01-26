#include "Circle.h"

Circle::Circle() {
	this->center = Point(0, 0);
	this->radian = 0;
}

void Circle::setCircle(Point center, float radian) {
	this->center = center;
	this->radian = radian;
}

void Circle::display() {
	cout << "Point center is : ";
	this->center.display();
	cout << "\t radian: \t";
	cout << radian;
}

Point Circle::getCenter() {
	return this->center;
}

float Circle::getRadian() {
	return this->radian;
}

Circle::~Circle()
{
}
