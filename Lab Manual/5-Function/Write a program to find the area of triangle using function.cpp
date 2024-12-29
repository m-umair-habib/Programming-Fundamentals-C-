// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the area of triangle using function.

#include<iostream>
using namespace std;

void area(float l, float w){
	float area;
	area = 0.5 * l * w;
	cout << "Area of Triangle: " << area;
}

int main(){
	cout << "=====Calculating the area of triangle=====" << endl;
	area(6.2, 5.4);
	
	return 0;
}