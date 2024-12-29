// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a program that takes two arrays of order 2x2 and display the sum, difference and multiplication of these arrays.

#include<iostream>
using namespace std;

int main(){
	// Define two 2x2 arrays
	int arr1[2][2], arr2[2][2], sum[2][2], diff[2][2], product[2][2];
	
	// Input first array
	cout << "Enter elements of first array: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cin >> arr1[i][j];
		}
	}
	
	// Input second array
	cout << "Enter elements of second array: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cin >> arr2[i][j];
		}
	}
	
	// Calculate sum and difference
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
			diff[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	
	// Calculate product
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			product[i][j] = 0; // Initialize product cell
			for(int k=0; k<2; k++){
				product[i][j] += arr1[i][k] * arr2[k][j]; 
			}	
		}
	}
	
	// Display Sum
	cout << "\n Sum of two arrays: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	
	// Display Difference
	cout << "\n Difference of two arrays: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << diff[i][j] << " ";
		}
		cout << endl;
	}
	
	// Display Product
	cout << "\n Product of two arrays: " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << product[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}