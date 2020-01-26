#include"Line.h"
#include"Tokenizer.h"
int Point::InstanceCount = 0;
//"(3,4)"

int main() {
	Point *a = new Point(3, 4);
	Point *b = new Point(4, 5);

	Line *c = new Line(a, b);

	cout << c->ToString();
	delete a, b, c;
	cout << endl << "------------------" << endl;
	Point *d = new Point(3, 4);
	Point *e = new Point(4, 5);
	Line *f = new Line(d, e);

	Line* lineparse = Line::Parse(f->ToString());
	cout << lineparse->ToString();

	system("pause");
	return 0;
}