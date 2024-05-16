#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    int id;
    string name;
    static int courseCount;

public:
    Course(string name);
    string getName();
    int getId(){ return id; };
    static int getCourseCount();
};

#endif