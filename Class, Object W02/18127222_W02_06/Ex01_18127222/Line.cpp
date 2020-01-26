#include "Line.h"

Line::Line() {
	this->_start = Point(0,0);
	this->_end = Point(0,0);
}

Line::Line(Point x, Point y) {
	this->_start = x;
	this->_end = y;
}

