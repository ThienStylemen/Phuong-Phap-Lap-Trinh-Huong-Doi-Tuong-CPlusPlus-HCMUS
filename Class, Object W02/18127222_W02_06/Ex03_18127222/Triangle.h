#pragma once
#include"Point.h"
class Triangle
{
private:
	Point _a;
	Point _b;
	Point _c;
public:
	void setTrianglge(Point a, Point b, Point c );
	void display();
	Point getFirstPoint();
	Triangle();
	Triangle(Point, Point, Point);
	~Triangle();
};

