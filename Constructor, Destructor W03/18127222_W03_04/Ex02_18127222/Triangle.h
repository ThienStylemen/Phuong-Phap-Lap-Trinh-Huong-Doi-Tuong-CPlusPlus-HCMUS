#pragma once
#include"Point.h"

class Triangle
{
private:
	Point *_a;
	Point *_b;
	Point *_c;
public:
	void display();
	float Superficiality();
	float Perimeter();
public:
	Triangle(const Triangle& a);
	Triangle();
	Triangle(Point a, Point b, Point c);
	~Triangle();
};