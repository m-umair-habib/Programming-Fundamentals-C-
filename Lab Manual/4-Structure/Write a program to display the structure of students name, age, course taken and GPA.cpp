// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the structure of students name, age, course taken and GPA.

#include<iostream>
using namespace std;

// Define strucutre
struct students{
	string name;
	int age;
	string course;
	float gpa;
}stu1;

int main(){
	// Enter student's data
	cout << "=====Data of student=====" << endl;
	cout << "Enter your name: "; cin >> stu1.name;
	cout << "Enter your age: "; cin >> stu1.age;
	cout << "Enter your course: "; cin >> stu1.course;
	cout << "Enter your gpa: "; cin >> stu1.gpa;
	
	cout << "---------------------------------------" << endl;
	
	// Display Data
	cout << "=====Student's Data" << endl;
	cout << "Name: " << stu1.name << endl;
	cout << "Age: " << stu1.age  << endl;
	cout << "Course: " << stu1.course << endl;
	cout << "GPA: " << stu1.gpa << endl;
	
	return 0;
}