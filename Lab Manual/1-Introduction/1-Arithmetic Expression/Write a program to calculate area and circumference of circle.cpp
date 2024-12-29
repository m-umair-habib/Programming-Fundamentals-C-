// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the radius of a circle from user and calculate the area and circumference of circle and display the results on screen.

#include<iostream>
#define pi 3.14
using namespace std;

int main(){
	float area, radius, circumference;
	
	cout << "Enter radius: "; cin >> radius;
	
	circumference = 2 * pi * radius;
	area = pi * (radius * radius);
	
	cout << "The Area of circle: " << area << endl;
	cout << "The Circumference of circle: " << circumference << endl;
	
	return 0;
}