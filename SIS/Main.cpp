#include <iostream>
#include <list>
#include "Student.h"

using namespace std;

void showMenu() {
	cout << "* * * * * * * * * * * * * * *" << endl;
	cout << "*                           *" << endl;
	cout << "*          Menu             *" << endl;
	cout << "*                           *" << endl;
	cout << "* * * * * * * * * * * * * * *" << endl << endl;
	cout << "1: Add New Registration " << endl;
	cout << "2: Show All List " << endl;
	cout << "3: Delete Registration According To The Student ID " << endl;
	cout << "4: Search Student " << endl;
	cout << "5: Exit " << endl << endl;
}

void addStudent(list<Student> *lst) {

	int id;
	string name, surname, fullname;
	int examGrade;

	cout << "Please Enter Student ID: ";
	cin >> id;
	cout << "Please Enter Name: ";
	cin >> name >> surname;
	fullname = name + " " + surname;
	cout << "Please Enter Exam Grade: ";
	cin >> examGrade;

	Student std(id, fullname, examGrade);
	lst->push_back(std);
}

void showList(list<Student>* lst) {

	list<Student>::iterator itr;
	cout << endl << "- - - - Student List - - - -" << endl;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		itr->showInfo();
	}
	cout << endl << endl;
}

void deleteStudent(list<Student>* lst) {

	int id;
	cout << "Please enter the ID of the student to be deleted: " << endl;
	cin >> id;

	list<Student>::iterator itr;
		for (itr = lst->begin(); itr != lst->end(); itr++) {
			if (itr->getId() == id)
				break;
		}
		if (itr == lst->end())
			cout << "The specified ID could not be found and deletion could not be performed! " << endl << endl;
		else
		lst->erase(itr);
}

void searchStudent(list<Student>* lst) {

	int id;
	cout << "Please enter the ID of the student to be searched: " << endl;
	cin >> id;

	list<Student>::iterator itr;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		if (itr->getId() == id)
			break;
	}
	if (itr == lst->end())
		cout << "The specified ID could not be found! " << endl << endl;
	else
		itr->showInfo();
}

int main() {

	list<Student>* studentList = new list<Student>();

	int input = 0;

	do {
		showMenu();
		cout << "Please Enter a Number: ";
		cin >> input;
		if (input == 1)
			addStudent(studentList);
		else if (input == 2)
			showList(studentList);
		else if (input == 3)
			deleteStudent(studentList);
		else if (input == 4)
			searchStudent(studentList);
		else if (input == 5)
			break;
		else
			cout << "You entered wrong number, please try again! " << endl << endl;

	} while (input != 5);


	return 0;
}