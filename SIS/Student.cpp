#include "Student.h"


//Student Constructor
Student::Student(int _id, string _name, int _examGrade) {
	id = _id;
	name = _name;
	examGrade = _examGrade;
}

void Student::setId(int _id) {
	id = _id;
}

void Student::setName(string _name) {
	name = _name;
}

void Student::setExamGrade(int _examGrade) {
	examGrade = _examGrade;
}

int Student::getId() {
	return id;
}

string Student::getname() {
	return name;
}

int Student::getExamGrade() {
	return examGrade;
}

void Student::showInfo() {
	cout << "Student Name: " << name << endl << "Student ID: " << id << endl << "Grade: " << examGrade << endl;
}