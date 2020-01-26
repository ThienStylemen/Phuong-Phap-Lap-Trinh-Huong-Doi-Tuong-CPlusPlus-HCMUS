#include "Employee.h"

void Employee::InputInforMation() {
	cin >> this->id;
	cin.ignore();	// xoa bo nho dem
	getline(cin, this->name);
	this->date_of_birth.inputDate();
	cin.ignore();
	getline(cin, this->address) ;
}

Employee::Employee(string id, string name, Date date_of_birth, string address) {
	this->id = id;
	this->name = name;
	this->date_of_birth = date_of_birth;
	this->address = address;
}
void Employee::OutputInformation() {
	cout << this->id <<"/" << this->name << "/" << this->date_of_birth.ToString() << "/" << this->address;
}
void Employee::setInforMation(string id, string name, Date date_of_birth, string address) {
	this->id = id;
	this->name = name;
	this->date_of_birth = date_of_birth;
	this->address = address;
}
Employee::Employee(){

}

Employee::~Employee()
{
}
