#include "Person.h"

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
	personsCount++;
	id = personsCount;
}
