#include "DocGia.h"

void DocGia::InputInformation() {
	cin >> this->id;
	cin.ignore();
	getline(cin, this->name);
	this->expiration_day.inputDate();
	cin >> this->gender;
}
void DocGia::OutputInformation() {
	cout << this->id << "," << this->name << "," << this->expiration_day.ToString() << "," << this->gender;
}
DocGia::DocGia(string id, string name, Date expiration_day, bool gender) {
	this->id = id;
	this->name = name;
	this->expiration_day = expiration_day;
	this->gender = gender;
}

void DocGia::setInformation(string id, string name, Date expiration_day, bool gender) {
	this->id = id;
	this->name = name;
	this->expiration_day = expiration_day;
	this->gender = gender;
}

DocGia::DocGia(){

}


DocGia::~DocGia(){

}
