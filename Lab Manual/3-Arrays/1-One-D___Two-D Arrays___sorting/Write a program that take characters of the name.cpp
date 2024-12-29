// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the characters of the name of student in first array, copy these characters in second array and display
//                     the name of the student from second array.

#include<iostream>
using namespace std;

int main(){
	char temp1[5];
	char temp2[5];
	
	for(int i=0; i<5; i++){
		cout << "Enter the characters of name: "; cin >> temp1[i];
	}
	for(int i=0; i<5; i++){
		temp2[i] = temp1[i];
		cout << temp2[i] << endl;
	}
	return 0;
}