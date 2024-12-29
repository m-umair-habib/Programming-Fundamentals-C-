// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take two numbers from user and display the sum, difference, multiplication, division and remainder of the numbers on computer screen.

#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	
	cout << "Enter Number_1: " ; cin >> num1;
	cout << "Enter Number_2: " ; cin >> num2;
	
	float sum, diff, mul, div;
	
	sum  = num1 + num2;
	cout << "Sum of two numbers are: " << sum << endl;
	
	diff = num1 - num2;
	cout << "Difference of two numbers are: " << diff << endl;
	
	mul  = num1 * num2;
	cout << "Multiplication of two numbers are: " << mul << endl;
	
	div  = num1 / num2;
	cout << "Division of two numbers are: " << div << endl;
	
	return 0;
}