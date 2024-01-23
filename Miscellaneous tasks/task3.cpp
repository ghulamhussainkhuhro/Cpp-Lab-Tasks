/*Write a C++ a program to accomplish the following
"Declare the variables x, y, z 
"Prompt the user to enter three integers separated by ' ??' two question mark characters. 
"Print all three integers WITHOUT . ' ??' two question mark characters.
Expected Output
Enter three numbers separated by ?? 
4??6??10
4610*/
#include<iostream>
using namespace std;
int main(){
	int x, y, z;
	cout<<"Enter three integers separated by ' ??' two question mark characters :";
	cin>>x;
	cin.ignore(2);//ignore is a member function from of cin that alows you to ignore(skip) certain number of characters fromthe input stream. 
	cin>>y;
	cin.ignore(2);//here i have written 2 to ignore next two characters
	cin>>z;
	cout<<"The result is :"<<x<<""<<y<<""<<z;
	

	return 0;
}


