// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the table of any number using function.

#include<iostream>
using namespace std;

void table(int number){
	for(int i=0; i<=10; i++){
		cout << number << " * " << i << " = " << number * i << endl;
	}
}

int main(){
	int number;
	cout << "Enter a number: "; cin >> number;
	
	table(number);
	
	return 0;
}