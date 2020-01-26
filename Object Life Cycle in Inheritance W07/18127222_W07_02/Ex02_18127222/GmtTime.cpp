#include "GmtTime.h"



string GmtTime::ToString(int number) {
	stringstream writer;
	if (_hour + number < 24)
		writer << this->_hour + number << ":" << this->_minute << ":" << this->_second;
	else {
		this->_hour = this->_hour + number - 24;
		writer << this->_hour << ":" << this->_minute << ":" << this->_second;
	}
	return writer.str();
}
GmtTime::~GmtTime()
{
}
