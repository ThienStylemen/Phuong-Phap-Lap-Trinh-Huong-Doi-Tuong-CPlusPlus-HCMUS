#include "Line.h"

string Line::ToString() {
	stringstream writer;
	writer << this->start->ToString() << ";" << this->end->ToString();
	return writer.str();
}

Line* Line::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s, ";");
	//(1,2)
	//(3,4)
	Point *p1 = Point::Parse(v[0]);
	Point *p2 = Point::Parse(v[1]);
	Line *ans = new Line(p1, p2);
	return ans;
}
Line::Line(Point *a, Point *b) {
	this->start = new Point(*a);
	this->end = new Point(*b);
}
//Line::Line(Point a, Point b) {
//	this->start = new Point(a);
//	this->end = new Point(b);
//}
Line::Line(const Point &a, const Point &b) {
	this->start = new Point(a);
	this->end = new Point(b);
}

Line::Line() {
	this->start = new Point(0, 0);
	this->end = new Point(0, 0);
}

Line::~Line() {
	delete start;
	delete end;
}
