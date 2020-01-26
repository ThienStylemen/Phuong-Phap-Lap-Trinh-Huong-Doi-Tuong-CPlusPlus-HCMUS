#pragma once
#include "Point.h"
class Circle
{
private:
	Point center;
	float radian;
public:
	void display();
	void setCircle(Point center, float radian);
	Point getCenter();
	float getRadian();
	Circle();
	~Circle();
};
