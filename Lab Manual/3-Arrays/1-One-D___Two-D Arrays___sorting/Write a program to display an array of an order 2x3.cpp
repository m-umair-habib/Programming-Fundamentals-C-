// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to display an array of an order 2x3.

#include<iostream>
using namespace std;

int main(){
	int a[2][3], i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout << "Enter value at box " << i << "x" << j <<": ";
			cin >> a[i][j]; 
		}
	}
	
	for(i=0; i<2; i++){
		cout << endl;
		for(j=0; j<3; j++){
			cout << a[i][j] << " ";
		}
	}
	return 0;
}