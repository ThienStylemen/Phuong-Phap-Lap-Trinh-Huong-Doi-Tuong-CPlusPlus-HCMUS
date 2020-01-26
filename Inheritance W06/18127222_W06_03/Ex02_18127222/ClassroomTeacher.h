#pragma once
#include"Teacher.h"
class ClassroomTeacher : public Teacher{
	const int allowance = 500;
public:
	int calSalaryClassRoomTeacher();
	ClassroomTeacher();
	~ClassroomTeacher();
};

