#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include "MastersStudent.h"
// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent


void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back(grade);
}

float MastersStudent::getMsGpa() {
  float sum;
	for (float &n : _ms_grades) {
		sum += n;	
	}
	float size = _ms_grades.size();
	return sum/size;
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  std::cout << "MS " <<  majorString(_major) << ": " << _ms_grad_year << std::endl;
  std::cout << "MS GPA: " << getMsGpa() << std::endl;
}
