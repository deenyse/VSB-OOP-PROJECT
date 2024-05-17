#include "Student.h"
#include "Professor.h"
#include "Course.h"
#include "University.h"
#include <iostream>

using namespace std;

int main() {
    University university;

    // Adding people//
    university.addPerson(new Student("Alice", 101,60));
    university.addPerson(new Professor("Bob", 202, university.addDepartment( new Department("Math"))));
    university.addPerson(new Professor("Bob", 203));
    university.addPerson(new Student("Charlie", 103,70));

    // Adding department
    university.addDepartment( new Department("Computer Science"));


    // Adding courses
    university.addCourse(new Course("Introduction to Programming"));
    university.addCourse(new Course("Data Structures"));

    university.displayDetails();

    return 0;
}