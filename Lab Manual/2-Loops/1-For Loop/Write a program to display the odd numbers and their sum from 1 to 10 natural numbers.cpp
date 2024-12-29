// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to display the odd numbers from 1 to 10 natural numbers and also display the sum of these numbers using FOR loop.

#include<iostream>
using namespace std;

int main(){
	int i, sum = 0;
	
	for(i=1; i<=10; i = i + 2){
		cout << i << endl;
		
		sum = sum + i;
	}
	
	cout << "The sum of first ten odd numbers are: " << sum;
	return 0;
}