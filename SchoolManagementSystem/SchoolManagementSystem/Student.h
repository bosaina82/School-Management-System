#pragma once
#include "Person.h"
class Student :
	public Person
{
private:
	int grade;
	double GPA;
public:
	void setGrade(int g);
	int getGrade();

	void setGPA(double p);
	double getGPA();

	Student();
};
