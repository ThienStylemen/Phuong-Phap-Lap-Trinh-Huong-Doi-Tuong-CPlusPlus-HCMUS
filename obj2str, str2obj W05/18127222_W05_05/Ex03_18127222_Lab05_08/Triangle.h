#pragma once
#include"Point.h"
class Triangle
{
	Point* first;
	Point* second;
	Point* third;

public:
	Triangle(const Point& first, const Point& second, const Point& third);
	Triangle(Point* first,  Point* second,  Point* third);
	string ToString();
	static Triangle* Parse(string s);
	Triangle();
	~Triangle();
};

