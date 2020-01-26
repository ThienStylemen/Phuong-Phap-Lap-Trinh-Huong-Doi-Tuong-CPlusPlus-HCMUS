#pragma once
#include"DocGia.h"
class DocGiaVip :public DocGia {
	const int fee = 50;
public:
	int feeVip();
	DocGiaVip(string id, string name, Date expiration_day, bool gende);
	DocGiaVip();
	~DocGiaVip();
};

