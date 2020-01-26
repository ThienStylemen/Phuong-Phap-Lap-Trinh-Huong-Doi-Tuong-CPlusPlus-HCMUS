#pragma once
#include"NhanVien.h"
#include"CongTy.h"
class NVQuanLy:public NhanVien{
	double he_so_chuc_vu;
	double thuong;
public:
	bool check_thang_sinh(unsigned int thangsinh);
	bool check_ma(int ma);
	bool check_name(string name);
	int getType();
	void Nhap();
	void Xuat();
	double TinhLuong();
public:
	NVQuanLy();
	~NVQuanLy();
};

