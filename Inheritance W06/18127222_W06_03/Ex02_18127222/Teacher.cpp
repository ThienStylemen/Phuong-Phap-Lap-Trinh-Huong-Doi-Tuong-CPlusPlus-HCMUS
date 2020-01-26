#include "Teacher.h"
int Teacher::calSalary() {
	this->salary = this->unit_salary * this->essential_salary - days_off * day_off_money;
	return this->salary;
}

Teacher::Teacher(string id, string name, int day_off) {
	this->id = id;
	this->name = name;
	this->days_off = day_off;
}

Teacher::Teacher(){

}
void Teacher::setInformation(string id, string name, int day_off) {
	this->id = id;
	this->name = name;
	this->days_off = day_off;
}

Teacher::~Teacher()
{
}
void Teacher::OutputInformation() {
	cout << this->id << "," << this->name;
}
void Teacher::InputInformation() {
	cin >> this->id;
	cin.ignore();
	getline(cin, this->name);
}