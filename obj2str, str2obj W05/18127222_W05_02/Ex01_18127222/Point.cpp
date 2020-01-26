#include "Point.h"
Point::Point() {
	InstanceCount += 1;
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const Point& other) {
	this->_x = other._x;
	this->_y = other._y;
}

Point::Point(float x, float y) {
	InstanceCount += 1;
	this->_x = x;
	this->_y = y;
}
string Point::ToString() {
	stringstream writer;
	writer << "(" << _x << ", " << _y << ")";
	return writer.str();
}
Point& Point::operator=(const Point& b) {
	this->_x = b._x;
	this->_y = b._y;
	return *this;
}
Point::~Point() {
	InstanceCount -= 1;
}
float Point::CalcDistanceTo(const Point* other) {
	float dx = this->_x - other->_x;
	float dy = this->_y - other->_y;
	return sqrt(dx*dx + dy * dy);
}