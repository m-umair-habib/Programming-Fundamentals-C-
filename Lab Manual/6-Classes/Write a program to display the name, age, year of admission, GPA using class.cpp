// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the name, age, year of admission, and GPA of a student using a class.

#include<iostream>
using namespace std;

class student{
	public:
		char name[20];
		string age, yoa, gpa;
		
		void in(){
			cout << "Enter Name: "; cin >> name ;
			cout << endl << "Enter Age: "; cin >> age;
			cout << endl << "Enter Year of Admission: "; cin >> yoa;
			cout << endl << "Enter GPA: " ; cin >> gpa;
		} 
		
		void put(){
			cout << "Name is: " << name << endl;
			cout << "Age is: " << age << endl;
			cout << "Year of Admission is: " << yoa << endl;
			cout << "GPA is: " << gpa << endl;
		}
};

int main(){
	student n;
	n.in();
	n.put();
	
	return 0;
}