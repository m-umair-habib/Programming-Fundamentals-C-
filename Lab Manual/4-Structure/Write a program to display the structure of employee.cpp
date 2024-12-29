// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the structure of employee having employee ID, employee name, employee designation, date of birth and date of joining.

#include<iostream>
using namespace std;

// Define Structure
struct employee{
	string id;
	string name;
	string designation;
	string DOB;
	string DOJ;
}emp1;

int main(){
	// Taking Data
	cout << "=====Data of Employee=====" << endl;
	cout << "Enter your id: "; cin >> emp1.id;
	cout << "Enter your name: "; cin >> emp1.name;
	cout << "Enter your designation: "; cin >> emp1.designation;
	cout << "Enter your DOB: "; cin >> emp1.DOB;
	cout << "Enter your DOJ: "; cin >> emp1.DOJ;
	
	cout << "--------------------------------------------" << endl;
	
	// Display Data
	cout << "=====Output=====" << endl;
	cout << "ID: " << emp1.id << endl;
	cout << "Name: " << emp1.name << endl;
	cout << "Designation: " << emp1.designation << endl;
	cout << "Date of Birth: " << emp1.DOB << endl;
	cout << "Date of Joining: " << emp1.DOJ << endl;
	
	return 0;
}