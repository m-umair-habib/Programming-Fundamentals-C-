// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take three numbers from user and display the numbers are equal or not using NESTED-IF statement.
#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Enter a number: "; cin >> a;
	cout << "Enter a number: "; cin >> b;
	cout << "Enter a number: "; cin >> c;
	
	if (a == b){
		if (b == c){
			if(c == a){
				cout << "Numbers are equal";
			}
		}
	}
	else{
		cout << "Numbers are not equal";
	}
	return 0;
}