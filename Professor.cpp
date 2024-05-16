#include "Professor.h"
#include <iostream>

Professor::Professor(string name, int id, Department* department) : Person(name, id) , department(department) {}

Professor::Professor(string name, int id) : Person(name, id), department(nullptr) {}

void Professor::displayDetails() {
    cout << " Professor" << endl;
    Person::displayDetails();
    if(this->department != nullptr)
        cout << "department: " << department->getName() << endl;
    else
        cout << "no department assigned" << endl;
}

