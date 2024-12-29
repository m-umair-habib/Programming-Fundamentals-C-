// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display name, basic pay, house rent, medical allowance and net pay of an employee using a class.

#include<iostream>
using namespace std;

class emp{
	private:
		char name[20];
		int basic_pay;
		float house_rent, ma, n_pay;
		
	public:
		void get(){
			cout << "Enter Employee Name: "; cin >> name ;
			cout << endl << "Enter Baisc Pay: "; cin >> basic_pay;
	
			cout << "=====================================" <<endl;
		} 
		
		void allow(){
			house_rent = basic_pay * 60/100.0;
			ma = basic_pay * 20/100.0;
			n_pay = basic_pay + house_rent + ma;
		}
		
		void put(){
			cout << "Employe name is: " << name << endl;
			cout << "Basic Pay is: " << basic_pay << endl;
			cout << "House rent is: " << house_rent << endl;
			cout << "Medical allowance is: " << ma << endl;
			cout << "Net Pay: " << n_pay << endl;
		}
};

int main(){
	emp e1;
	e1.get();
	e1.allow();
	e1.put();
	
	return 0;
}