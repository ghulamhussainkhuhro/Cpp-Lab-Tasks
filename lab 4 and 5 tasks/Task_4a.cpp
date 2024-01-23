/*Task # 4(a): Write a program that will ask the user to enter any number and 
the program checks whether the entered number is  a positive number or negative number.*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter any integer : ";
	cin>>num;
	
	if(num >= 0)
	cout<<"Number entered is positive.";
	
	else
	cout<<"Number entered is negative.";
	
	return 0;
}
