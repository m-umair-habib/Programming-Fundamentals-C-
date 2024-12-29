// ----- Developed by: Muhammad Umair Habib-----
// Question statement: Write a program that take input marks obtained by a student in a subject. The marks of each subject is 100. Find out grade of the
//						student by using IF-Else statement. 
//						grade >= 85   Grade A+  
//						grade >= 80   Grade A  
//						grade >=75    Grade B+
//						grade >=70    Grade B
//						grade >=65    Grade C+
//						grade >=60    Grade C  
//						grade >=55    Grade D+ 
//						grade >=50    Grade D
//						grade < 50    Grade F 

#include<iostream>
using namespace std;

int main(){
	int marks;
	cout << "Enter your marks: "; cin >> marks;
	
	if (marks >= 85){
		cout << "Grade A+";
	}
	
	else if (marks >= 80){
		cout << "Grade A";
	}
	
	else if (marks >= 75){
		cout << "Grade B+";
	}
	
	else if (marks >= 70){
		cout << "Grade B";
	}
	
	else if (marks >= 65){
		cout << "Grade C+";
	}
	
	else if (marks >= 60){
		cout << "Grade C";
	}
	
	else if (marks >= 55){
		cout << "Grade D+";
	}
	
	else if (marks >= 50){
		cout << "Grade D";
	}
	else{
		cout << "Grade F";
	}
	return 0;
}