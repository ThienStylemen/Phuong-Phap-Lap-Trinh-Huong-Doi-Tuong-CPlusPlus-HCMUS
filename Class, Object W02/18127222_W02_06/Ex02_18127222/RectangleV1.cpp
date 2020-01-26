#include "Rectangle.h"
Rectangle::Rectangle(Point top_left, Point bottom_right) {
	this->_TopLeft = top_left;
	this->_BottomRight = bottom_right;
}

Rectangle::Rectangle() {
	Point a(0, 0);
	this->_TopLeft = a;
	this->_TopLeft = a;
}

void Rectangle::setRectangle(Point top_left, Point bottom_right) {
	this->_TopLeft = top_left;
	this->_BottomRight = bottom_right;
}

Rectangle::~Rectangle()
{
}

void Rectangle::display() {
	cout << "Top Left point is:\t ";
	this->_TopLeft.display();
	cout << " \t and Bottom Right is:\t ";
	this->_BottomRight.display();
}

Point Rectangle::getTopLeftPoint() {
	return this->_TopLeft;
}

