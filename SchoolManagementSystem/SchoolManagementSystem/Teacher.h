#pragma once
#include "Person.h"
class Teacher :
	public Person
{
private:
	double salary;
	int WorkingHours;
public:
	void setSalary(double s);
	double getSalary();

	void setWorkingHours(int w);
	int getWorkingHours();

	Teacher();

};

