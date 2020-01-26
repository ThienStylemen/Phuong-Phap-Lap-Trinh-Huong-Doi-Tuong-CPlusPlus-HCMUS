#include"Point.h"
Point::Point() {
	this->_x = 0;
	this->_y = 0;
}

void Point::display() {
	cout << "(" << this->_x << "," << this->_y << ")" << "\t";
}

Point::Point(float x, float y) {
	this->_x = x;
	this->_y = y;
}
Point::~Point() {
	// this is abort function
}