#include "StudentDatabase.h"
#include <iostream>
// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  std::string LastName;
  LastName = s->getLastName();
  _students[LastName] = s;
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
	if (_students.find(last_name) == _students.end()) {
		std::cout  << last_name << " not found" << std::endl;
	}
	else {
  _students[last_name]->printInfo();
	}
}
