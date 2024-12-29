// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to compare the three numbers and display the greater number using nested-if statement and display the result in the below box.  

#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Enter a number: "; cin >> a;
	cout << "Enter a number: "; cin >> b;
	cout << "Enter a number: "; cin >> c;
	
	if (a > b){
		if (a > c){
			cout << a << " is greater";
		}
	}
	if (b > a){
		if (b > c){
			cout << b << " is greater";
		}
	}
	else{
		cout << c << " is greater";
	}
	return 0;
}