#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
using namespace std;
class Department {
private:
    string name;

public:
    Department( string name);
    string getName();
};

#endif