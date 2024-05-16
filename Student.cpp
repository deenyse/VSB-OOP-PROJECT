#include "Student.h"
#include <iostream>

Student::Student(string name, int id, int academicPerformance) : Person(name, id), academicPerformance(academicPerformance) {}


void Student::displayDetails() {
    cout << " Student" << endl;
    Person::displayDetails();
    cout << "personal performance: " << this->academicPerformance << "%" <<endl;
}