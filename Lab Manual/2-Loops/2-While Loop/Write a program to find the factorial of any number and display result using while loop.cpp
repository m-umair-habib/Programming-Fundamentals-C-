// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to find the factorial of any number and display the result on screen using While Loop.

#include<iostream>
using namespace std;

int main(){
	int number, fact, i;
	fact = 1;
	i = 1;
	cout << "Enter a number: "; cin >> number;
	
	while(i <= number){
		fact = fact * i;
		i++;
	}
	cout << "Factorial will be: " << fact;
	return 0;
}