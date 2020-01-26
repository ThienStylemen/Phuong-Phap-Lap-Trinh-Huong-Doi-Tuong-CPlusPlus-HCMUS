#include"Header.h"
int main() {
	Student a;
	a.input();
	cout << endl;
	a.output();
	string aName = a.getName();
	cout << aName;

	cout << endl;
	cout << "literature points is : ";
	int aLiteraturePoints = a.getLiteraturePoint();
	cout << aLiteraturePoints;

	cout << endl;
	cout << "math points is : ";
	int aMathPoints = a.getMathPoints();
	cout << aMathPoints;

	Student b;
	b.setName("Thien2");
	b.setLiteraturePoint(6);
	b.setMathPoint(9);
	b.output();
	cout << "GPA " << endl;
	float bGPA = b.calculateGPA();
	cout << bGPA;
	cout << endl << " GRADE: " << endl;
	string resultGrade = b.getGrade();
	cout << resultGrade;
	system("pause");
	return 0;
}