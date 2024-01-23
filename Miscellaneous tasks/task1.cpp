/*Write a C++ a program to accomplish the following
"Declare the variables x, y, z and result to be of type int.
"Prompt the user to enter three integers separated by ' , ' a comma. 
"compute the sum, assign to result variable and Print the sum of all three integers.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float x, y, z; //variable declaration
    char comma;
	cout<<"Enter three numbers separated by commas   : ";
	cin>>x;
	cin>>comma;//this can also be done by using cin.ignore(1)
	cin>>y;
	cin>>comma;//this can also be done by using cin.ignore(1)
	cin>>z;
	float a=x+y+z;
	cout<<"Sum of the numbers is : "<<a;
	 
	
	
	
	return 0;
	
	
}
