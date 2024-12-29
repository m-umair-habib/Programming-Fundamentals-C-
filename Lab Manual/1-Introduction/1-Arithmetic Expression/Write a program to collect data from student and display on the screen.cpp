// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the student name, discipline, year of admission and registration from user and display on the computer screen. 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string name, discipline;
	int year_of_admission, registration;
	
	cout<<"Enter your name(use underscore instead of space): "; cin>>name;
	
	cout<<"Enter your discipline(use underscore instead of space): "; cin>>discipline;
	
	cout<<"Enter your year of admission: "; cin>>year_of_admission;
	
	cout<<"Enter your registration: "; cin>>registration;
	
	//Display on the screen
	
	cout << "\n--- Student Information ---\n";
	cout<<"Name: "<< name <<endl;
	cout<<"Discipline: "<< discipline <<endl;
	cout<<"Year of Admission: "<< year_of_admission <<endl;
	cout<<"Registration: "<< registration <<endl;

	return 0;
}