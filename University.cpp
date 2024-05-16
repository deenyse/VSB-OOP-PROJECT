#include "University.h"
#include <iostream>

using namespace std;

void University::addPerson(Person* person) {
    community.push_back(person);
}

void University::addCourse(Course* course) {
    courses.push_back(course);
}

Department* University::addDepartment(Department *department) {
    departments.push_back(department);
    return department;
}


void University::displayDetails() {
    cout << "University Details:" << endl;

    cout << "People:" << endl;
    for (auto& person : community)
        person->displayDetails();

    cout << "Departments:" << endl;
    for (auto& department : departments)
        cout << "- " << department->getName() << endl;

    cout << "Courses:" << endl;
    for (auto& course : courses)
        cout << "- " << course->getName() << "; id: " << course->getId()<< endl;

    cout << "Total courses: " << Course::getCourseCount() << endl;
}