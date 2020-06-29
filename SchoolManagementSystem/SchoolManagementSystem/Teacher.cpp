#include "Teacher.h"
#include<iostream>
using namespace std;

void Teacher::setSalary(double s)
{
    salary = s;
}

double Teacher::getSalary()
{
    return salary;
}

void Teacher::setWorkingHours(int w)
{
    WorkingHours = w;
}

int Teacher::getWorkingHours()
{
    return WorkingHours;
}

Teacher::Teacher()
{
    cout << "Teacher Constructor" << endl;
}
