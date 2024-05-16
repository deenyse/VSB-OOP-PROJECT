#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Person.h"
#include "Course.h"
#include "Department.h"
#include <vector>

using namespace std;

class University {
private:
    vector<Person*> community;
    vector<Course*> courses;
    vector<Department*> departments;
public:
    void addPerson(Person* person);
    void addCourse(Course* course);
    Department* addDepartment(Department* department);
    void displayDetails();
};

#endif