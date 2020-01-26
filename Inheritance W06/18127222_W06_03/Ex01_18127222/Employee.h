#pragma once

#include "Date.h"

class Employee{
private:
	string id;
	string name;
	Date date_of_birth;
	string address;
public:
	void InputInforMation();
	void setInforMation(string id, string name, Date date_of_birth, string address);
	void OutputInformation();
	Employee();
	Employee(string id, string name, Date date_of_birth, string address);
	~Employee();
};

