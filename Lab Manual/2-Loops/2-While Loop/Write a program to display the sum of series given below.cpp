// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to display the sum of the series given below using While Loop.
//                     +1/2+1/3+1/4+------------------------------------------------------------+1/45 
#include<iostream>
using namespace std;

int main(){
	int n = 1; // start with the first term.
	double sum = 0.0;
	
	while(n <= 45){
		sum = sum + (1.0/n);
		n++;
	}
	
	cout << "Sum of series: " << sum << endl;
	
	return 0;
}