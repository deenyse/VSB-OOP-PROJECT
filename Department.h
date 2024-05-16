#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
using namespace std;
class Department {
private:
    std::string name;

public:
    Department(const string name);
    string getName();
};

#endif