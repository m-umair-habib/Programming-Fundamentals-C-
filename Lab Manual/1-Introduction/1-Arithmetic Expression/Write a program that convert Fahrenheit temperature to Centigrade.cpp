// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the temperature in Fahrenheit from user and convert it in Centigrade temperature using formula (C=5/9(F-32)) and display the result on computer screen.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float F, C;
	
	cout<<"Enter you temperatue in Fahrenheit: "; cin>> F;
	
	C = 5*(F-3)/9;
	
	cout<<"Your temperature in Centigrade is: "<<C;
	
	return 0;
}