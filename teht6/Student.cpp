#include "Student.h"
#include <iostream>

Student::Student(string name, int age)
{
    this->setName(name);
    this->setAge(age);
}

void Student::setAge(int age)
{
    Age = age;
}

void Student::setName(string name)
{
    Name = name;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Student " << this->getName() << " Age " << this->getAge() << endl;
}
