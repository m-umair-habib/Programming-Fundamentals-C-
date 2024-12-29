// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to print a table of a given number using "for" loop.

#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout << "Enter a number: "; cin >> number;
	
	for(int i=0; i<=10; i++){
		cout << number << "x" << i << "=" << number * i << endl;
	}
	
	return 0;
}