#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int id;
	static int personsCount;
	string name, email, mobile, address;
public:
	int getID();

	void setName(string n);
	string getName();

	void setEmail(string e);
	string getEmail();

	void setMobile(string m);
	string getMobile();

	void setAddress(string a);
	string getAddress();

	Person();
		
};

