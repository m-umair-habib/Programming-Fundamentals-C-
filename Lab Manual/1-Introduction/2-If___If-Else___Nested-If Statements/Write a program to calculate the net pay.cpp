// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program to calculate the net pay of an employee. Input the basic pay and calculate the net pay as follows using IF-Else 
//						Statement: 
//						• House rent is 45% of the basic pay. 
//						• Medical allowance is 2% of basic if basic is greater than Rs. 5000/-. It is 5% of basic pay if the pay is less than Rs. 5000/-. 
//						• Conveyance allowance is Rs. 96/- if basic pay is less than Rs. 5000/-. It is Rs. 193/- if the basic pay is more than Rs. 5000/-. 
//						• Net pay is calculated by adding basic pay, medical allowance, conveyance allowance and house rent. 

#include<iostream>
using namespace std;

int main(){
	int net_pay, basic_pay;
	int hr, m, ca;
	
	cout << "Enter Basic pay: "; cin >> basic_pay;
	
	if (basic_pay > 5000){
		hr = (basic_pay/100) * 45;
		m = (basic_pay/100) * 2;
		ca = 193;
		net_pay = (basic_pay + hr + m + ca);
		cout << "Net pay: " << net_pay;
	}
	else if (basic_pay < 5000){
		hr = (basic_pay/100) * 45;
		m = (basic_pay/100) * 5;
		ca = 96;
		net_pay = (basic_pay + hr + m + ca);
		cout << "Net pay: " << net_pay;
	}
	else{
		cout << "Error!";
	}
	return 0;
}