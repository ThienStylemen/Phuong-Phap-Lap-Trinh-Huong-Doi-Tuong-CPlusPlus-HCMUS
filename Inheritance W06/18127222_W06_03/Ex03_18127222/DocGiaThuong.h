#pragma once
#include"DocGia.h"
class DocGiaThuong :public DocGia {
	unsigned int _so_sach_muon_trong_thang;
	const int unit = 50000;
public:
	DocGiaThuong(string id, string name, Date expiration_day, bool gender);
	int Fee(unsigned int _so_sach_muon_trong_thang);
	DocGiaThuong();
	~DocGiaThuong();
};

