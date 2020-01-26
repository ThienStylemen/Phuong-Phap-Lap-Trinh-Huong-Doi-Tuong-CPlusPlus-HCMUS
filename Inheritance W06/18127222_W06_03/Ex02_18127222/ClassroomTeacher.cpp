#include "ClassroomTeacher.h"

ClassroomTeacher::ClassroomTeacher(){

}


ClassroomTeacher::~ClassroomTeacher()
{
}
int ClassroomTeacher::calSalaryClassRoomTeacher() {
	return (this->calSalary() + this->allowance);
}