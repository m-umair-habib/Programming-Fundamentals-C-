// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take a 4-digit number from user and display the number in reverse order on computer screen.

#include<iostream>
using namespace std;

int main(){
	int number, reverse = 0;
	
	cout << "Enter a 4-digit number: "; cin >> number;
	if(number < 1000 || number > 9999){
		cout << "please enter valid number!";
	}
	
	while(number != 0){
		reverse = reverse * 10 + (number % 10);
		number /= 10;
	}
	cout << "Reverse of your number is: " << reverse;
	
	return 0;
}