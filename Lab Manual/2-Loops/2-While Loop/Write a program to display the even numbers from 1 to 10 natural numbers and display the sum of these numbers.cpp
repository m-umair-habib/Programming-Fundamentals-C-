// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to display the even numbers from 1 to 10 natural numbers, also display the sum of these numbers using While Loop.

#include<iostream>
using namespace std;

int main(){
	int i = 1;
	int sum = 0;
	while(i <= 10){
		if(i % 2 == 0){
			cout << i << endl;
			sum = sum + i;
		}
		i++;
	}
	cout << "Sum: "<< sum;
	return 0;
}