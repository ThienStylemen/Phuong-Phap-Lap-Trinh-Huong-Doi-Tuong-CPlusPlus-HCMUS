#include"NhanVien.h"
#include"NVSanXuat.h"
#include"NVCongNhat.h"
#include"CongTy.h"

//void f1(NhanVien nv) {
//	cout << nv.TinhLuong() << endl;
//}
void f2(NhanVien& nv) {
	cout << nv.TinhLuong() << endl;
}
void f3(NhanVien* nv) {
	cout << nv->TinhLuong() << endl;
}


int main() {
	/*NVSanXuat nvsx1;

	nvsx1.Nhap();
	nvsx1.Xuat();

	NVCongNhat nvcn1;
	nvcn1.Nhap();
	nvcn1.Xuat();
*/

/*
	NVSanXuat nvsx;
	nvsx.Nhap();

	f1(nvsx);

	f2(nvsx);
	f3(&nvsx);*/

	CongTy abc;
	abc.NhapDS();
	cout << endl << "---------------" << endl;
	abc.XuatDS();
	cout << endl << "-------------------------" << endl;
	
	cout << "Nhan vien co luong co ban cao nhat la:" << endl;
	NhanVien* a = abc.TimNhanVienLuongCaoNhat();
	a->Xuat();


	cout << "\n---------------------\n" << "Dem so NV san xuan:" << endl;
	cout << abc.dem_so_NVSanXuat();

	cout << "\n---------------------\n" << "Dem so NV cong nhat:" << endl;
	cout << abc.dem_so_NVCongNhat();

	cout << "\n---------------------\n" << "nhan vien co luong < 3000: " << endl;
	abc.LietKeNVLuongDuoi3000();

	cout << "\n tinh tong luong cua cong ty: \t" << abc.TinhTongLuong() << endl;
	cout << "tinh luong trung binh cua cong ty: \t" << abc.TinhLuongTrungBinh() << endl;


	cout << "\n----------------------\n";
	cout << "Tim nhan vien = ma " << endl;
	abc.TimNhanVienBangMa();
	cout << "Tim nhan vien ma ten " << endl;
	abc.TimNhanVienBangTen();

	cout << "\n----------------------\n";
	cout << "dem so nhan vien sinh trong thang 5: " << abc.dem_so_NV_sinh_thang5() << endl;

	/* cout << "Tong luong: " << abc.TinhTongLuong() << endl;
*/
	system("pause");
	return 0;
}


/* example test(NhanVien* a){
// thay doi thong so o trong nay thi o ngoai cung bi thay doi
}*/