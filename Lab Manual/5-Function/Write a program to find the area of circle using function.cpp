// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the area of circle using function.

#include<iostream>
using namespace std;

void area(float r){
	float area;
	area = 3.14 * r * r;
	cout << "Area of Circle: " << area;
}

int main(){
	cout << "=====Calculating the area of circle=====" << endl;
	area(7.5);
	return 0;
}