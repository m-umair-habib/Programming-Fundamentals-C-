// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the transpose of an array of order 2x3.

#include<iostream>
using namespace std;

int main(){
	// Define an array of 2x3
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int transpose[3][2];
	
	// Displaying the original array
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	// Calculating the transpose of an array
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			transpose[j][i] = arr[i][j];
		}
	}
	
	// Displaying transposed array
	cout << "\n Transpose of the Array (3x2): " << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout << transpose[i][j] << " ";
		}
		cout << endl;
	}
		
	return 0;
}