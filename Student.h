#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <vector>
using namespace std;

class Student : public Person {
private:
    int academicPerformance;
public:
    Student(string name, int id, int academicPerformance);
    void displayDetails() override;
};

#endif