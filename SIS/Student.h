#pragma once

#include <iostream>

using namespace std;

class Student {
private:
	int id;
	string name;
	int examGrade;
public:
	Student(int _id, string _name, int _examGrade); //Student Constructor
	void setId(int _id);
	void setName(string _name);
	void setExamGrade(int _examGrade);
	int getId();
	string getname();
	int getExamGrade();
	void showInfo();
};