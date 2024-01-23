#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter any two numbers : ";
	cin>>num1>>num2;
	if (num1 == num2)//for three numbers condition willbe (num1==num2 && num2==num3)
	cout<<"Both numbers are equal.";//we cannot write as (num1==num2==num3)
	else
	cout<<"Both numbers are not equal.";
	return 0;
}
