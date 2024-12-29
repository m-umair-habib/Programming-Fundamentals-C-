// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the sum of two numbers using constructor in a class. 

#include<iostream>
using namespace std;

class sum{
	public:
		int n, m, s;
		sum (int x, int y){
			n = x;
			m = y;
			s = n + m;
			cout << "Sum = " << s << endl; 
		}
};

int main(){
	sum a(16, 10), b(2, 3);
	return 0;
}