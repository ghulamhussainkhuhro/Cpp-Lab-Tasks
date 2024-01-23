#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter fisrt number : ";
	cin>>num1;

	cout<<"Enter fisrt number : ";
	cin>>num2;
	
	cout<<"Enter fisrt number : ";
	cin>>num3;
	
	if(num1>=num2 && num1>=num3)
	{
		cout<<"Greatest number is : "<<num1;
	}

	if(num2>=num1 && num2>=num3)
	{
		cout<<"Greatest number is : "<<num2;
	}

	if(num3>=num1 && num3>=num2)
	{
		cout<<"Greatest number is : "<<num3;
	}

	return 0;
}
