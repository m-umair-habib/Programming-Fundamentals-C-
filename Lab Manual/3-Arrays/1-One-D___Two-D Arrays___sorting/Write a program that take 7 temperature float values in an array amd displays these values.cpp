// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take 7 temperature float values in an array and display these values on computer screen.

#include<iostream>
using namespace std;

int main(){
	float temp[7];
	
	for(int i=0; i<7; i++){
		cout << "Enter temperature: "; cin >> temp[i];
		//i = i + 1;
	}
	
	cout << "Temperature:" << endl;
	for(int i=0; i<7; i++){
		cout << temp[i] << endl;
	}
	return 0;
}