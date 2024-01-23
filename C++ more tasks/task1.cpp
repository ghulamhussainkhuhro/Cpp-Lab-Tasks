/*Task # 1 Write a program in C++ to compute the total and average of four numbers. (take values for numbers from the user at runtime)  

Expected output
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25*/

#include<iostream>
using namespace std;
int main()
{
	int a ,b ,c , d;
	cout<<"Input fist two numbers : ";
	cin>> a >> b;
	cout<<"Input last two numbers : ";
	cin>> c >> d;
	
	cout<<"The total of four numbers is :"<< a+b+c+d<<endl;
	cout<<"The average of four numbers is :"<<(float)(a+b+c+d)/4;
	return 0;
}

