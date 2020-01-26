#pragma once
#include"Point.h"
class Line {
	Point* start;
	Point* end;
public:
	string ToString();
	//void setLine(Point a, Point b);
	static Line* Parse(string s);
	Line(Point a, Point b);
	Line(Point *a, Point *b);
	Line(const Point &a, const Point &b);

	Line();
	~Line();
};

