// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to apply operators using functions with switch statement.

#include<iostream>
using namespace std;

void call(int n1, char op, int n2){
	switch(op){
		case '+':
			cout << "The sum of "<<n1 <<" and "<<n2<< " is " << (n1 + n2);
			break;
		case '-':
			cout << "The difference of "<<n1 <<" and "<<n2<< " is " << (n1 - n2);
			break;
		case '*':
			cout << "The multiplication of "<<n1 <<" and "<<n2<< " is " << (n1 * n2);
			break;
		case '/':
			cout << "The division of "<<n1 <<" and "<<n2<< " is " << (n1 / n2);
			break;
		case '%':
			cout << "The modulus of "<<n1 <<" and "<<n2<< " is " << (n1 % n2);
			break;
			
		default:
			cout << "Invalid Operator!";
	}
}

int main(){
	
	int n1;
	cout << "Enter Number 1: "; cin >> n1;
	
	char op;
	cout << "Enter Operator: "; cin >> op;
	
	int n2;
	cout << "Enter Number 2: "; cin >> n2;
	
	call(n1, op, n2);
	
	return 0;
}