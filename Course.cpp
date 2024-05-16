#include "Course.h"

int Course::courseCount = 0;

Course::Course(string name) : name(name), id(courseCount) {
    courseCount++;
}

string Course::getName() {
    return name;
}

int Course::getCourseCount() {
    return courseCount;
}