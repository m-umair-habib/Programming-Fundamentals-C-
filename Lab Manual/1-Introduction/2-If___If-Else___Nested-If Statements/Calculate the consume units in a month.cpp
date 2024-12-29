// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take previous and current month reading from user and calculate the consumed units in a month. If the
//						consumed units are less and equal to 300, then calculate the "electricity bill" by taking Rs. 13/- per unit rate. On the other
//						hand, if the consumed units are more than 300, then calculate the "electricity bill" by taking Rs.18/- per unit rate as well
//						as 5% surcharge in the bill using IF-Statement.

#include<iostream>
using namespace std;

int main(){
	float pre_reading, cur_reading;
	float units, total;
	cout << "Enter previous month reading: "; cin >> pre_reading;
	cout << "Enter current month reading: "; cin >> cur_reading;
	
	units = pre_reading + cur_reading;
	
	if (units <= 300){
		total = units * 13 + (units/100)*5;
		cout << "Total electricity bill: " << total;
	}
	if (units > 300){
		total = units * 13 + (units/100)*5;
		cout << "Total electricity bill: " << total;
	}
	
	return 0;
}