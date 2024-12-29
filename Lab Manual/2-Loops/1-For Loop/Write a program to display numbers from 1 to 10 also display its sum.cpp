// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to display the odd numbers from 1 to 10 whole numbers and also display the sum of these numbers using FOR loop.

#include<iostream>
using namespace std;

int main(){
	int sum = 0;
	for(int i=1; i<=10; i++){
		cout << i << endl;
		
		sum = sum + i;
	}
	
	cout << "Sum: " << sum;
	return 0;
}