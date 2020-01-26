#include"Header.h"

void Student::input() {
	cout << "please input name,literature points and math points alternately";
	cin >> this->name;
	cin >> this->litenaturePoints;
	cin >> this->mathPoints;
}
void Student::output() {
	cout << "\n here is your student's information: ";
	cout << this->name << "\tLiterature Points is: " << this->litenaturePoints << "\tMath Points is: " << this->mathPoints << endl;
}
string Student::getName() {
	return this->name;
}
int Student::getLiteraturePoint() {
	return this->litenaturePoints;
}
int Student::getMathPoints() {
	return this->mathPoints;
}
void Student::setName(string name) {
	this->name = name;
}
void Student::setLiteraturePoint(int mark) {
	this->litenaturePoints = mark;
}
void Student::setMathPoint(int mark) {
	this->mathPoints = mark;
}
float Student::calculateGPA() {
	return ((float)this->litenaturePoints + (float)this->mathPoints) / 2;
}
string Student::getGrade() {
	float resultGPA = this->calculateGPA();
	if (resultGPA >= 9)
		return "A";
	else if (resultGPA >= 7) return "B";
	else if (resultGPA >= 5) return "C";
	else return "D";
}
