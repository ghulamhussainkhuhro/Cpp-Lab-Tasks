/*Task # 21 Write a C++ program, which takes three int values
from the user, and print their addition and average.*/
 
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter two numbers : \n";
	cin>>x>>y>>z;
	
	cout<<"Sum of three numbers is : \n"<<x+y+z<<endl;
	
	cout<<"Average of three numbers is : \n"<<(x+y+z)/3<<endl;
	
	
	
	return 0;
} 
