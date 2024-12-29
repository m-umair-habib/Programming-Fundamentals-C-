// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to input a number from the user. Use if-else statement to find out whether the number is less than or greater
//                     than 100. 

#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout << "Enter a number: "; cin >> number;
	if (number < 100){
		cout << "The number is less than 100."; 
	}
	else if (number > 100){
		cout << "The number is greater than 100.";
	}
	else{
		cout << "The number is equal to 100.";
	}
	return 0;
}