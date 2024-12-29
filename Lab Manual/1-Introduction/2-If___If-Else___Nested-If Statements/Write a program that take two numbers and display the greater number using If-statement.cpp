// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take two numbers from user and display the greater number using IF-Statement.

#include<iostream>
using namespace std;

int main(){
	int x, y;
	
	cout << "Enter first number: " ; cin >> x;
	cout << "Enter second number: " ; cin >> y;
	
	if ( x > y ){
		cout << "First number is greater.";
	}
	
	if ( x < y ){
		cout << "Second number is greater.";
	}
	else{
		cout << "Both are equal.";
	}
	return 0;
}