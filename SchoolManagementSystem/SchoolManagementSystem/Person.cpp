#include "Person.h"
#include <iostream>
using namespace std;

int Person::personsCount = 0;

int Person::getID()
{
	return id;
}

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setEmail(string e)
{
	email = e;
}

string Person::getEmail()
{
	return email;
}

void Person::setMobile(string m)
{
	mobile = m;
}

string Person::getMobile()
{
	return mobile;
}

void Person::setAddress(string a)
{
	address = a;
}

string Person::getAddress()
{
	return address;
}

Person::Person()
{
	cout << "Person Constructor" << endl;
	personsCount++;
	id = personsCount;
}
