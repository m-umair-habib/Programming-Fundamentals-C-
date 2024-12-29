// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take a number from user and display the number is divisible by 3 or not using IF-ELSE statement.

#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout << "Enter a number: "; cin >> number;
	
	if (number % 3 == 0){
		cout << "Number is divisible by 3";
	}
	else{
		cout << "Number is not divisible by 3";
	}
	return 0;
}