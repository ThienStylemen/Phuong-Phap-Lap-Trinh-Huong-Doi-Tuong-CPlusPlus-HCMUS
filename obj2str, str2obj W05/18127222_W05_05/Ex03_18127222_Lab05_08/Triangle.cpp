#include "Triangle.h"

Triangle::Triangle(){
	this->first = new Point(0, 0);
	this->second = new Point(0, 0);
	this->third = new Point(0, 0);
}

Triangle::Triangle(const Point& first, const Point& second, const Point& third) {
	this->first = new Point(first);
	this->second = new Point(second);
	this->third = new Point(third);
}

Triangle::Triangle(Point* first, Point* second, Point* third) {
	this->first = new Point(*first);
	this->second = new Point(*second);
	this->third = new Point(*third);
}
Triangle* Triangle::Parse(string s) {
	string seperator = ";";
	vector<string> v = Tokenizer::Parse(s, seperator);
	// v[0] = ((1,2)	// v[1] = (3,4)		 v[2] = (5,6))
	Point *p1 = Point::Parse(v[0].substr(1, v[0].length() - 1));
	Point *p2 = Point::Parse(v[1]);
	Point *p3 = Point::Parse(v[2].substr(0, v[0].length() - 1));
	Triangle *ans = new Triangle(p1, p2, p3);
	return ans;
}

string Triangle::ToString() {
	stringstream writer;
	writer << "(" << this->first->ToString() << ";" << this->second->ToString() << ";" << this->third->ToString() << ")";
	return writer.str();
}

Triangle::~Triangle(){
	delete this->first, this->second, this->third;
}
