// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that takes two one-dimensional arrays from user and display the arrays as well as sum of these arrays on the screen.

#include<iostream>
using namespace std;

int main(){
	int temp1[7];
	int temp2[7];
	
	int sum = 0;
	
	cout << "-----ARRAY_1-----" <<endl;
	for(int i=0; i<7; i++){
		cout << "Enter temperature: " << i+1 << ":";
		cin >> temp1[i];
	}
	
	cout << "-----ARRAY_2-----" <<endl;
	for(int i=0; i<7; i++){
		cout << "Enter temperature: " << i+1 << ":";
		cin >> temp2[i];
	}
	
	cout << "-----PRINTING-ARRAYS-----" <<endl;
	for(int i=0; i<7; i++){
		cout << temp1[i] << endl;
	}
	cout << endl;
	for(int i=0; i<7; i++){
		cout << temp2[i] << endl;
	}
	
	for(int i=0; i<7; i++){
		sum = sum + temp1[i] + temp2[i];
	}
	
	cout << "-----SUMMING_UP-----" <<endl;
	cout << "Sum: " <<sum;
	
	return 0;
}