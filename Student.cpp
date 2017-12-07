#include "Student.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {}

void Student::addGrade(float grade) {
	_grades.push_back(grade);
}

float Student::getGpa() {
	float sum;
	for (float &n : _grades) {
		sum += n;	
	}
	float size = _grades.size();
	return sum/size;
}	

const std::string& Student::getLastName() {
  
  return _last_name;
}

std::string Student::majorString(Major m) {
	std::string ret;
	switch(m) {
		case Major::EE:
		ret =  "EE";
		break;
		case Major::ME:
		ret =  "ME";
		break;
		case Major::CE:
		ret =  "CE";
		break;
		case Major::CHE:
		ret =  "CHE";
		break;
		case Major::BSE:
		ret =  "BSE";
		break;
		case Major::ART:
		ret =  "ART";
		break;
		case Major::ARCH:
		ret =  "ARCH";
		break;
		default: 
		std::cout << "Invalid Major" << std::endl;
	}
	return ret;
}

void Student::printInfo(){
	std::cout << _last_name << "," << 
	_first_name << std::endl;
	std::cout << majorString(_major) << " " <<
	_grad_year << std::endl;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "GPA: " << getGpa() << std::endl;
}
