// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the three numbers using a class.

#include<iostream>
using namespace std;

class numbers{
	private:
		int n1, n2, n3;
		public:
			void input_numbers(){
				cout << "Enter three numbers: ";
				cin >> n1 >> n2 >> n3;
			}
			void display_numbers(){
				cout << "The three numbers are: " << n1 << ", "<< n2 << ", " << n3 << endl;
			}
		
};

int main(){
	numbers nums;
	nums.input_numbers();
	nums.display_numbers();
	
	return 0;
}