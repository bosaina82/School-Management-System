#include "Student.h"
#include<iostream>
using namespace std;
void Student::setGrade(int g)
{
    grade = g;
}

int Student::getGrade()
{
    return grade;
}



void Student::setGPA(double p)
{
    GPA = p;
}

double Student::getGPA()
{
    return GPA;
}

Student::Student()
{
    cout << "Student Constructor" << endl;
}
