#include "NhanVienSX.h"

NhanVienSX::NhanVienSX(){
		
}
int NhanVienSX::calWage() {
	this->salary = this->unit * this->number_of_product;
	return this->salary;
}

NhanVienSX::NhanVienSX(string id, string name, Date date_of_birth, string address, int number_of_product) {
	this->setInforMation(id, name, date_of_birth, address);
	this->number_of_product = number_of_product;
}

NhanVienSX::~NhanVienSX(){

}


NhanVienSX::NhanVienSX(int number_of_product) {
	this->number_of_product = number_of_product;
}

