// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the sum of two numbers using destructor in a class. 

#include<iostream>
using namespace std;

class prg{
	public:
		prg(){
			cout << "This is constructor function." << endl;
		}
		
		~prg(){
			cout << "This is destructor function." << endl;
		}
};

int main(){
	prg x;
	int a, b;
	a=10, b=20;
	
	cout << "Sum = " << (a+b) << endl;
	
	return 0;
}