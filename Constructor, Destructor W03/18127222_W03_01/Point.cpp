#include "Point.h"
Point::Point() {
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const Point& other) {
	this->_x = other._x;
	this->_y = other._y;
}

Point::Point(float x, float y) {
	this->_x = x;
	this->_y = y;
}

void Point::display() {
	cout << "(" << this->_x << "," << this->_y << ")" << "\t";
}

Point::~Point() {

}
float Point::CalcDistanceTo(const Point* other) {
	float dx = this->_x - other->_x;
	float dy = this->_y - other->_y;
	return sqrt(dx*dx + dy * dy);
}