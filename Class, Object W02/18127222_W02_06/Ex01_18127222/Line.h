#pragma once
#include <iostream>
#include"Point.h"
using namespace std;

class Line {
private:
	Point _start;
	Point _end;
public:
	Point getStart() { return this->_start;}
	Point getEnd() { return this->_end ; }
	void SetStart(Point value) { this->_start = value; }
	void SetEnd(Point value) { this->_end = value; }

public:
	Line();
	Line(Point, Point);
	//~Line();
};

