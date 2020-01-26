#pragma once
#include"NhanVien.h"
class NVSanXuat : public NhanVien {
private:
	// 3 + 1 thuộc tính
	int soSP;
public:
	// 2 + 0 hàm
	// void NhapNVSX(); // SAI
	bool check_thang_sinh(unsigned int thangsinh);
	bool check_ma(int ma);
	bool check_name(string name);
	int getType();
	void Nhap();
	void Xuat();
	double TinhLuong();
public:
	NVSanXuat();
	~NVSanXuat();
};