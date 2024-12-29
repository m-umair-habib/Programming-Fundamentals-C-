// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to find the factorial of any number and display the result on screen using for Loop.

#include<iostream>
using namespace std;

int main(){
	int number, fact, i;
	fact = 1;
	
	cout << "Enter a number: "; cin >> number;
	
	for(i = 1; i <= number; i++){
		fact = fact * i;
	}
	cout << "Factorial will be: " << fact;
	return 0;
}