#pragma once
#include"NhanVien.h"
// NVCongNhat: mã nhân viên, họ tên, địa chỉ, hệ số lương, lương cơ bản, số ngày nghỉ.
// Lương(NVCongNhat): hệ số lương * lương cơ bản - số ngày nghỉ * 300.000.
class NVCongNhat : public NhanVien {
private:
	// 3 + 2 thuộc tính
	double heSo;
	double luongCB;
public:
	// 2 + 0 hàm
	bool check_thang_sinh(unsigned int thangsinh);
	bool check_ma(int ma);
	bool check_name(string name);
	int getType();
	void Nhap();
	void Xuat();
	double TinhLuong();
public:
	NVCongNhat();
	~NVCongNhat();
};
