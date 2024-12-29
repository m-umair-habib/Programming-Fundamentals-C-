// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program to display the structure of quiz, assignment, mid-term, final-term and total marks to three students.

#include<iostream>
using namespace std;

// Define structure
struct students{
	int quiz;
	int assignment;
	int mid_term;
	int final_term;
	float total;
} stu1, stu2, stu3;

int main(){
	// 1st student
	cout << "~~~~~Data of 1st student~~~~~" << endl;
	cout << "Enter the quiz numbers: "; cin >> stu1.quiz;
	cout << "Enter the assignment numbers: "; cin >> stu1.assignment;
	cout << "Enter the mid-term numbers: "; cin >> stu1.mid_term;
	cout << "Enter the final-term numbers: "; cin >> stu1.final_term;
	
	// 2nd student
	cout << "~~~~~Data of 2nd student~~~~~" << endl;
	cout << "Enter the quiz numbers: "; cin >> stu2.quiz;
	cout << "Enter the assignment numbers: "; cin >> stu2.assignment;
	cout << "Enter the mid-term numbers: "; cin >> stu2.mid_term;
	cout << "Enter the final-term numbers: "; cin >> stu2.final_term;
	
	// 1st student
	cout << "~~~~~Data of 3rd student~~~~~" << endl;
	cout << "Enter the quiz numbers: "; cin >> stu3.quiz;
	cout << "Enter the assignment numbers: "; cin >> stu3.assignment;
	cout << "Enter the mid-term numbers: "; cin >> stu3.mid_term;
	cout << "Enter the final-term numbers: "; cin >> stu3.final_term;
	
	cout << "\n =====DISPLAYING DATA=====";
	
	// Display 1st student
	cout << "\n\t\t\t\t\t 1st student";
	cout << "\n Quiz: " << stu1.quiz;
	cout << "\n Assignment: " << stu1.assignment;
	cout << "\n Mid-term: " << stu1.mid_term;
	cout << "\n Final-term: " << stu1.final_term;
	stu1.total = stu1.quiz + stu1.assignment + stu1.mid_term +stu1.final_term;
	cout << "\n Total marks of 1st student: " << stu1.total;
	
	// Display 2nd student
	cout << "\n\t\t\t\t\t 2nd student";
	cout << "\n Quiz: " << stu2.quiz;
	cout << "\n Assignment: " << stu2.assignment;
	cout << "\n Mid-term: " << stu2.mid_term;
	cout << "\n Final-term: " << stu2.final_term;
	stu2.total = stu2.quiz + stu2.assignment + stu2.mid_term +stu2.final_term;
	cout << "\n Total marks of 2nd student: " << stu2.total;
	
	// Display 3rd student
	cout << "\n\t\t\t\t\t 3rd student";
	cout << "\n Quiz: " << stu3.quiz;
	cout << "\n Assignment: " << stu3.assignment;
	cout << "\n Mid-term: " << stu3.mid_term;
	cout << "\n Final-term: " << stu3.final_term;
	stu3.total = stu3.quiz + stu3.assignment + stu3.mid_term +stu3.final_term;
	cout << "\n Total marks of 3rd student: " << stu3.total;
	
	return 0;
	
}