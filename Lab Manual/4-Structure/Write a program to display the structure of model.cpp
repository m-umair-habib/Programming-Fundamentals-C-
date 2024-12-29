// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the structure of model number, part number and cost of two cars.

#include<iostream>
using namespace std;
// Define Structure
struct car{
	string model;
	string part;
	double cost;	
}car1, car2;

int main(){
	// For Car 1
	cout << "=====Data of 1st car=====" << endl;
	cout << "Enter Model: "; cin >> car1.model;	
	cout << "Enter Part: " ; cin >> car1.part;
	cout << "Enter Cost: " ; cin >> car1.cost;
	cout << "----------------------------------------" << endl;
	
	// For Car 2
	cout << "=====Data of 2nd car=====" << endl;
	cout << "Enter Model: "; cin >> car2.model;	
	cout << "Enter Part: "; cin >> car2.part;
	cout << "Enter Cost: "; cin >> car2.cost;
	cout << "----------------------------------------" << endl;
	
	// Display Car 1
	cout << "=====First_Car=====";
	cout << "\n Model: " << car1.model << endl;
	cout << "\n Part: " << car1.part << endl;
	cout << "\n Cost: " << car1.cost << endl;
	cout << "----------------------------------------" << endl;
	
	// Display Car 2
	cout << "=====Second_Car=====";
	cout << "\n Model: " << car2.model << endl;
	cout << "\n Part: " << car2.part << endl;
	cout << "\n Cost: " << car2.cost << endl;
	cout << "----------------------------------------" << endl;
	
	return 0;
}
