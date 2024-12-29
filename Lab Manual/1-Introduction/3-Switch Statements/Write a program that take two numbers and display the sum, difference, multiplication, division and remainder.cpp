// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take two numbers and an operator from user and display the sum, difference, multiplication, division and 
//						remainder using switch statement.

#include<iostream>
using namespace std;

int main(){
	int x, y, result;
	char o;
	
	cout << "Enter a number: "; cin >> x;
	cout << "Enter a number: "; cin >> y;
	
	cout << "Enter an operator: "; cin >> o;
	
	switch(o){
		case('+'):
			{
				result = x + y;
				cout << "Sum: " << result;
				break;
			}
		case('-'):
			{
				result = x - y;
				cout << "Difference: " << result;
				break;
			}
		case('*'):
			{
				result = x * y;
				cout << "Multiplication: " << result;
				break;
			}
		case('/'):
			{
				result = x / y;
				cout << "Division: " << result;
				break;
			}
		case('%'):
			{
				result = x % y;
				cout << "Remainder: " << result;
				break;
			}
		default:
			{
				cout << "Invalid Operator!";
				break;
			}
	}
	return 0;
} 