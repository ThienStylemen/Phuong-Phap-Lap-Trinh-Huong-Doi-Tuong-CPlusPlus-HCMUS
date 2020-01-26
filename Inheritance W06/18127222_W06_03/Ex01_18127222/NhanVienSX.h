#pragma once
#include"Employee.h"
#include<string>
class NhanVienSX :public Employee{
	int salary;
	const int unit = 20000;
	int number_of_product;
public:
	NhanVienSX(string id, string name, Date date_of_birth, string address, int number_of_product);
	int calWage();
	NhanVienSX();
	NhanVienSX(int number_of_product);
	~NhanVienSX();
};

