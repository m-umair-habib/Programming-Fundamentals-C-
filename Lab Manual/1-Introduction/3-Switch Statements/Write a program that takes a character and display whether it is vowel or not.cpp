// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that a character from user and display whether it is vowel or not on the screen.

#include<iostream>
using namespace std;

int main(){
	char c;
	
	cout << "Enter a lower case character: "; cin >> c;
	
	switch(c){
		case('a'):
		{
			cout << "It's a vowel";
			break;
		}
		
		case('e'):
		{
			cout << "It's a vowel";
			break;
		}
		
		case('i'):
		{
			cout << "It's a vowel";
			break;
		}
		
		case('o'):
		{
			cout << "It's a vowel";
			break;
		}
		
		case('u'):
		{
			cout << "It's a vowel";
			break;
		}
		
		default:
		{
			cout << "It's not a vowel";
			break;
		}
	}
	return 0;
} 