#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string name, int id) : name(name), id(id) {}

void Person::displayDetails() {
    cout << "Name: " << name << "; id: " << id << endl;
}