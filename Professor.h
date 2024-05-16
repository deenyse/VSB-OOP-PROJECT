#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include "Course.h"
#include "Department.h"

using namespace std;

class Professor : public Person {
private:
    Department* department;
public:
    Professor(string name, int id);
    Professor(string name, int id, Department * department);
    void displayDetails() override;
};

#endif