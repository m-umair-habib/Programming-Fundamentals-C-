// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take 7 temperature float values in first array, copy these values in a second array and then display the 
//                     values in second array on computer screen. 

#include<iostream>
using namespace std;

int main(){
	float temp1[7];
	float temp2[7];
	
	for(int i=0; i<7; i++){
		cout << "Enter temperature: ";
		cin >> temp1[i];
	}
	
	for(int i=0; i<7; i++){
		temp2[i] = temp1[i];
		
		cout << temp2[i] << endl;
	}
	return 0;
}