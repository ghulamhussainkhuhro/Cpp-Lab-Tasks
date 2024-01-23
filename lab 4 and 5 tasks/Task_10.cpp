/*Task # 10: Write a program that accepts three numbers from the user 
and prints compares whether all three numbers are equal are not.*/


#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter 1st number : ";
	cin>>num1;
	cout<<"Enter 2nd number : ";
	cin>>num2;
	cout<<"Enter 3rd number : ";
	cin>>num3;
	
	if(num1==num2 && num2==num3)
	cout<<"Given numbers are equal.";
	
	else
	cout<<"Given numbers are not equal.";
	
	return 0;
}
