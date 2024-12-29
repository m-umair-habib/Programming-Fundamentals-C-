// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the area of rectangle using function.

#include<iostream>
using namespace std;

void area(float l, float w){
	float area;
	area = l * w;
	cout << "Area of Rectangle: " << area;
}

int main(){
	cout << "=====Calculating the area of Rectangle=====" << endl;
	area(10, 20);
	return 0;
}