// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the determinant of 2x2 martix. 

#include<iostream>
using namespace std;

int main(){
	// Variables to store matrix elements
	float a, b, c, d;
	
	// Input matrix elements
	cout << "Enter the elements of the 2x2 matrix (a b c d): " << endl;
	cout << "[a b]" << endl;
	cout << "[c d]" << endl;
	cin >> a >> b >> c >> d;
	
	// Calculate the determinant
	float determinant =  (a*d) - (b*c);
	
	// Display the result
	cout << "\n The determinant of 2x2 matrix is: " << determinant << endl; 
	
	return 0;
}