// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take a number from user and display the number is even or odd using IF-ELSE statement.

#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout << "Enter a number: "; cin >> number;
	
	if (number % 2 == 0){
		cout << "The number is Even.";
	}
	else {
		cout << "The number is Odd.";
	}
	return 0;
}