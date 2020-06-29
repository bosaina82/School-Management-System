#pragma once
#include<string>
using namespace std;
class Subject
{
private:
	string name;
	int fullMarks, studentMarks;
public:
	void setName(string n);
	string getName();

	void setfullMark(int fm);
	int getfullMarks();

	void setstudentMarks(int sm);
	int getstudentMarks();

};