/*Task # 11: Write a program that accepts two numbers from the user
 and prints compares which number is  a greater number among them*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter 1st number : ";
	cin>>num1;
	cout<<"Enter 2nd number : ";
	cin>>num2;
	
	if(num1>num2)
	cout<<num1<<" is greater than "<<num2;
	
	else if(num2>num1)
	cout<<num2<<" is greater than "<<num1;
	
	else
	cout<<"Numbers are  equal.";
	
	return 0;
}

