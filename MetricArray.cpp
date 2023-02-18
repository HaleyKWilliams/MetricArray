/*Haley Williams
CS 232
The Metric Array
Inputs ten values into an array and outputs average and highest and lowest values
Due February 15,2023*/

#include <iostream>
using namespace std;

int main() {
	//initialize variables
	int nums[10];
	int currentNum, countNum = 0;
	int highVal=0;
	int lowVal=100;
	float avg, sum=0;
	//accept and validate user input
	cout << "Welcome to The Metric Array.";
	
	for (countNum = 0; countNum < 10; countNum++) {
		cout << "Please enter next value between 1 and 100" << endl;
		cin >> currentNum;

		while (currentNum < 1 || currentNum>100) {
			cout << "Invalid Entry. Please enter a value between 1 and 100." << endl;
			cin >> currentNum;
		}
		nums[countNum] = currentNum;
		sum += currentNum;	
	}

	for  (int i=0; i<=9; i++){
		if (nums[i] > highVal) {
			highVal = nums[i];
		}
		if (nums[i] < lowVal) {
			lowVal = nums[i];
		}
	}
	
	avg=sum/countNum;
	cout << endl;
	cout<< "The lowest number in your array is : "<<lowVal<< endl;
	cout<< "The highest number in your array is: "<< highVal<< endl;
	cout<< "The average of these values is: "<< avg<< endl;
	
}