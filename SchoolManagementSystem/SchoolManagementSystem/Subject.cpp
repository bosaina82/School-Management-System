#include "Subject.h"

void Subject::setName(string n)
{
    name = n;
}

string Subject::getName()
{
    return name;
}

void Subject::setfullMark(int fm)
{
    fullMarks = fm;
}

int Subject::getfullMarks()
{
    return fullMarks;
}

void Subject::setstudentMarks(int sm)
{
    studentMarks = sm;
}

int Subject::getstudentMarks()
{
    return studentMarks;
}

