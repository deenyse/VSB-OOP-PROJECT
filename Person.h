#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "AbstractPerson.h"
using namespace std;

class Person : public AbstractPerson {
protected:
    string name;
    int id;

public:
    Person(string name, int id);
    void displayDetails() override;
};

#endif