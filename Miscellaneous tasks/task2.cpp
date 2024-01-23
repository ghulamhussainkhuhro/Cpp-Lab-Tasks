/*Write a C++ a program to accomplish the following
"	Declare two float variables numerator and denominator.
"	Prompt the user to values for numerator and denominator separated by ' / ' character.
"	  compute and display there product on the new line.
"	 Expected Output
Enter numerator and denominator separated by / .
12 / 6
Product of 12 / 6 = 2.*/
#include<iostream>
using namespace std;
int main(){
	float numerator,
	      denominator;
	
	cout<<"Enter two numbers separated by / forward slash : ";
	
	cin>>numerator;
	
	char slash; // Read the '/' charcter
	
	cin>>slash;
	
	cin>>denominator;
	
	
	if(denominator==0){
		cout<<"Error : Divison by zero is not allowed."<<endl;
	}
	else{
		float Qoutient=numerator/denominator;
	    cout<<"Quotient of two numbers is :"<<Qoutient;	
	}
	return 0;
}

