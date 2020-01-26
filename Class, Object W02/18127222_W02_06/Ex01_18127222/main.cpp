#include"Line.h"

int main() {
	Line line;

	
	cout << "line: ( ("<< line.getStart().X() << ", " << line.getStart().Y() << ") , (" << line.getEnd().X() << ", " << line.getEnd().Y() <<") )" << endl;

	
	//cout << "line: ( (" << line.SetStart( point.SetX(3,4) , p );
		//<< ", " << line.getStart().Y() << ") , (" << line.getEnd().X() << ", " << line.getEnd().Y() << ", )" << endl;
	Point a, b;
	a.SetX(4);
	a.SetY(4);
	b.SetX(5);
	b.SetY(5);
	
	line.SetStart(a);
	line.SetEnd(b);

	cout << "line: " << "( (" << line.getStart().X() << ", " << line.getStart().Y() << "),(" << line.getEnd().X() << ", " << line.getEnd().Y() << ") )";



	//cout << "line: ( (" << line.getStart().SetX(4) << ", " << line.getStart().Y() << ") , (" << line.getEnd().X() << ", " << line.getEnd().Y() << ", )" << endl;


	system("pause");
	return 0;
}