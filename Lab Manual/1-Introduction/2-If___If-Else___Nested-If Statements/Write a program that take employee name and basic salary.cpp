// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take the employee name and basic salary from user. If the basic salary is less than or equal to 5000,
// 						then take house rent (30% of basic salary), contract allowance (45% of basic salary), conveyance allowance (45% of basic 
// 						salary), medical allowance Rs.193/. On the other hand, if the basic salary is more than 5000, then take all the parameters
// 						same except taking income tax (2% of basic salary), medical allowance Rs. 96/- and calculate net salary by adding basic salary,
// 						 house rent, contract allowance, conveyance allowance, medical allowance and subtracting income tax using IF-Statement. 

#include<iostream>
using namespace std;

int main(){
	string name;
	int salary, medical, income_tax;
	float contract_allowance, house_rent, conveyance_allowance, net_salary;
	
	cout << "Enter employee name: "; cin >> name;
	cout << "Enter employee basic salary: "; cin >> salary;
	
	if (salary <= 5000){
		house_rent = (salary/100) * 30;
		contract_allowance = (salary/100) * 45;
		conveyance_allowance = (salary/100) * 45;
		medical = 193;
		net_salary = salary + medical + conveyance_allowance + contract_allowance + house_rent;
		
		cout << "Net salary: " << net_salary;
	}
	else if (salary > 5000){
		house_rent = (salary/100) * 30;
		contract_allowance = (salary/100) * 45;
		conveyance_allowance = (salary/100) * 45;
		medical = 96;
		income_tax = (salary/100) * 2;
		net_salary = (salary + medical + conveyance_allowance + contract_allowance + house_rent) - income_tax;
		
		cout << "Net salary: " << net_salary;

	}
	else{
		cout << "Invalid input";
	}
	
	return 0;
}