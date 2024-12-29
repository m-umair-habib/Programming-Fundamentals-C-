// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the roll number of the student and amount in dollar from user and display the roll number of the student, amount in dollar and amount in rupees on computer screen.  

#include<iostream>
using namespace std;

int main(){
	string roll_number;
	float amount_in_dollar, amount_in_rupees, one_dollar_in_rupees;
	
	cout<<"Enter your roll number: "; cin>>roll_number;
	cout<<"Enter your Amount in dollars: "; cin>>amount_in_dollar;
	cout<<"Enter current amount of one dollar in rupees: "; cin>>one_dollar_in_rupees;
	
	amount_in_rupees = one_dollar_in_rupees * amount_in_dollar; 
	
	cout<<"Student's roll number: "<< roll_number<< endl;
	cout<<"Amount in Rupees: "<< amount_in_rupees;
	
	return 0;
}