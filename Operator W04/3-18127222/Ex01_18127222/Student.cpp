#include"Student.h"

Student::Student() {
	this->name = "Nguyen Tan Thien";
	this->literature = 0.0;
	this->math = 0;
}

Student::~Student() {

}

void Student::display() {
	cout << this->name << "\t" << this->math << "\t" << this->literature;

}

Student::Student(string name, float math, float literature) {
	this->name = name;
	this->math = math;
	this->literature = literature;
}

Student::Student(string name) {
	this->name = name;
	this->math = 0;
	this->literature = 0;
}

Student::Student(const Student& student) {
	this->name = student.name;
	this->math = student.math;
	this->literature = student.literature;
}
