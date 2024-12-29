// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the values of x,y,z using cramer’s rule.

#include<iostream>
using namespace std;

int main(){
	// Coefficients and constants of the equations
	float a1, b1, c1, d1;
	float a2, b2, c2, d2;
	float a3, b3, c3, d3;
	
	// Input coefficients
	cout << "Enter coefficients of the first equation (a1 b1 c1 d1): ";
	cin >> a1 >> b1 >> c1 >> d1;
	
	cout << "Enter coefficients of the first equation (a2 b2 c2 d2): ";
	cin >> a2 >> b2 >> c2 >> d2;
	
	cout << "Enter coefficients of the first equation (a3 b3 c3 d3): ";
	cin >> a3 >> b3 >> c3 >> d3;
	
	// Calculate determinants directly
	float D  = a1*(b2*c3 - b3*c2) - b1*(a2*c3 - a3*c2) + c1*(a2*b3 - a3*b2);
	float Dx = d1*(b2*c3 - b3*c2) - b1*(d2*c3 - d3*c2) + c1*(d2*b3 - d3*b2);
	float Dy = a1*(d2*c3 - d3*c2) - d1*(a2*c3 - a3*c2) + c1*(a2*d3 - a3*d2);
	float Dz = a1*(b2*c3 - b3*d2) - b1*(a2*d3 - a3*d2) + d1*(a2*b3 - a3*b2);
	
	// Check if determinant is zero
	if(D == 0){
		cout << "The system has no unique solution as determinant is zero!" << endl;
		return 0;
	}
	
	// Calculate x, y, z
	float x = Dx/D;
	float y = Dy/D;
	float z = Dz/D;
	
	// Display results
	cout << "\n The solution are: " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	return 0;
}