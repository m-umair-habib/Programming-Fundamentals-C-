// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to find the number is even or odd using function.

#include<iostream>
using namespace std;

void even_or_odd(int number){
	if(number % 2 == 0){
		cout << "It is an Even number";
	}
	else{
		cout << "It is an Odd number";
	}
}

int main(){
	int number;
	cout << "Enter a number: "; 
	cin >> number;
	even_or_odd(number);
	return 0;
}