#include "Student.h"

Student::Student(string firstName, string middleName, string lastName) {
	this->_firstName = firstName;
	this->_middleName = middleName;
	this->_lastName = lastName;
}

Student::Student() {
	this->_firstName = "Thien";
	this->_lastName = "Nguyen";
	this->_middleName = "Tan";
}

void Student::display() {
	cout << this->_firstName + " " + this->_middleName + " " + this->_lastName;
}
Student::~Student() {

}