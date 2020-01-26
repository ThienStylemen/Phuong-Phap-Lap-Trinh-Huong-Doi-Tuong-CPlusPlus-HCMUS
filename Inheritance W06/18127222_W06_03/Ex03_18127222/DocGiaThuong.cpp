#include "DocGiaThuong.h"

int DocGiaThuong::Fee(unsigned int _so_sach_muon_trong_thang) {
	this->_so_sach_muon_trong_thang = _so_sach_muon_trong_thang;
	return (this->_so_sach_muon_trong_thang*this->unit);
}

DocGiaThuong::DocGiaThuong(string id, string name, Date expiration_day, bool gender) {
	this->setInformation(id, name, expiration_day, gender);
}

DocGiaThuong::DocGiaThuong(){

}

DocGiaThuong::~DocGiaThuong()
{
}
