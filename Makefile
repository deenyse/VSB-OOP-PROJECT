CXX = g++
CXXFLAGS = -std=c++11

OBJECTS = Person.cpp Student.cpp Professor.cpp Course.cpp University.cpp AbstractPerson.cpp Department.cpp

EXECUTABLE = main

$(EXECUTABLE): $(OBJECTS) main.cpp
	$(CXX) $(CXXFLAGS) main.cpp $(OBJECTS) -o main

clean:
	rm -f ./main