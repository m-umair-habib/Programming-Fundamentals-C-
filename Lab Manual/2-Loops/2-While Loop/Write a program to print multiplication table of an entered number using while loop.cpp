// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to print the multiplication table of a number entered from the user using While Loop. 

#include<iostream>
using namespace std;

int main(){
	int number, i = 0;
	
	cout << "Enter a number: "; cin >> number;
	
	while(i <= 10){
		cout << number << "x" << i << "="<< number * i << endl;
		i = i + 1;
	}
	return 0;
}