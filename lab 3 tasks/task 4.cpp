/*Task # 4 Write a C++ program to declare and initialize
a double variable with some value such as 50.25. 
Then retrieve the integral part and store it in the 
variable of type long, and the fractional part and store it in a
variable of  of type double. Display  actual number, integral part Fractional part.*/

#include<iostream>
using namespace std;
int main(){
	double actualnum;
	
	long int integralpart;
	
	double fractionalpart;
	
	cin>>actualnum;
	
	cout<<"Actual number :"<<actualnum<<endl;
	
	cout<<"Intergral part :"<<(int)actualnum<<endl;
	
	cout<<"Fractional part :"<<actualnum-(int)actualnum;
	
	return 0;
}
