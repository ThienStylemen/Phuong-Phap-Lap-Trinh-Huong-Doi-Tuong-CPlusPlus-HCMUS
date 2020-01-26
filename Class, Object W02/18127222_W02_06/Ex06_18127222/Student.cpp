#include "Student.h"

Student::Student() {
	this->_familyName = "Nguyen";
	this->_middleName = "Tan";
	this->_firstName = "Thien";
}

Student::Student(string first, string middle, string family) {
	this->_firstName = first;
	this->_middleName = middle;
	this->_familyName = family;
}

string Student::getFirst() {
	return this->_firstName;
}

void Student::setInfor(string first, string middle, string family) {
	this->_familyName = family;
	this->_firstName = first;
	this->_middleName = middle;
}

void Student::display() {
	cout << this->_familyName << this->_middleName << _firstName;
}

Student::~Student()
{
}
