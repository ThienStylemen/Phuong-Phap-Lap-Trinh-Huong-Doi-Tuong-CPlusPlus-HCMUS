#pragma once

#include "Date.h"

class DocGia{
	string id;
	string name;
	Date expiration_day;
	bool gender;	// true : wonam, false: woman
public:
	void setInformation(string id, string name, Date expiration_day, bool gender);
	void InputInformation();
	void OutputInformation();
	DocGia(string id, string name, Date expiration_day, bool gender);
	DocGia();
	~DocGia();
};

