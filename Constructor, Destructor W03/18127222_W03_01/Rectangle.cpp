#include "Rectangle.h"
Rectangle::Rectangle(Point top_left, Point bottom_right) {
	this->_TopLeft = new Point(top_left);
	this->_BottomRight = new Point(bottom_right);
}

Rectangle::Rectangle(const Rectangle& b) {
	this->_TopLeft = new Point(*b._TopLeft) ;
	this->_BottomRight = new Point(*b._BottomRight) ;
}

Rectangle::Rectangle(const Rectangle& b, const Rectangle& c) {
	this->_TopLeft = new Point(*b._TopLeft) ;
	this->_BottomRight = new Point(*c._BottomRight);
}

Rectangle::Rectangle() {
	_TopLeft = new Point();
	_BottomRight = new Point();
}

void Rectangle::setRectangle(Point top_left, Point bottom_right) {
	this->_TopLeft = new Point(top_left);
	this->_BottomRight = new Point(bottom_right);
}

Rectangle::~Rectangle(){
	delete _TopLeft;
	delete _BottomRight;
}

void Rectangle::display() {
	cout << "Top Left point is:\t ";
	this->_TopLeft->display();
	cout << " \t and Bottom Right is:\t ";
	this->_BottomRight->display();
}

