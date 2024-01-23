/*Task # 12: Write a program that accepts three numbers from the user and prints "increasing" if the numbers are in increasing order, "decreasing" if the numbers are in decreasing order.
Test Data
Input first number: 15 
Input second number: 25
Input third number: 35
Expected Output:
Increasing order*/

#include<iostream>
using namespace std;

int main()
{
	//This method of arranging in ascending order is through swapping 
	//there is another method by using if condition
	int num1,num2,num3,temp;
	
	cout<<"Enter 1st number : ";
	cin>>num1;
	
	cout<<"Enter 2nd number : ";
	cin>>num2;
	
	cout<<"Enter 3rd number : ";
	cin>>num3;
	
	if(num1>num2){
		temp=num1;
		num1=num2;
		num2=temp;
	}
	
	if(num2>num3){
		temp=num2;
		num2=num3;
		num3=temp;
	}
	if(num1>num3){
		temp=num1;
		num1=num3;
		num3=temp;
		
	}
	cout<<"ascending order is : ";
	cout<<num1<<" "<<num2<<" "<<num3;
	return 0;
}

