#include "DocGiaVip.h"

DocGiaVip::DocGiaVip()
{
}
int DocGiaVip::feeVip() {
	return this->fee;
}
DocGiaVip::DocGiaVip(string id, string name, Date expiration_day, bool gender) {
	this->setInformation(id, name, expiration_day, gender);
}

DocGiaVip::~DocGiaVip()
{
}
