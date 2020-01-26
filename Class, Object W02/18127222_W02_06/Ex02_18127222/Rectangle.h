#pragma once
#include "Point.h"
class Rectangle
{
public:
	void display();
	Point getTopLeftPoint();
	void setRectangle(Point top_left, Point bottom_right);
	Rectangle();
	Rectangle(Point top_left, Point bottom_right);
	~Rectangle();
private:
	Point _TopLeft;
	Point _BottomRight;

};
