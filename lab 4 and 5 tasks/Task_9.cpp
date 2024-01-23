/*Task # 9: Write a program that accepts
two numbers from the user and prints compares whether
both numbers are equal are not*/

#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter 1st number : ";
	cin>>num1;
	cout<<"Enter 2nd number : ";
	cin>>num2;
	
	if(num1==num2)
	cout<<"Both numbers are equal.";
	
	else
	cout<<"numbers are not equal.";
	
	return 0;
}
