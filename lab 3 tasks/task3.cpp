//Task # 3 Write a C++ program to swap two variables

#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter value of num1 :"<<endl;
	cin>>num1;
	cout<<"Enter value of num2 :"<<endl;
	cin>>num2;
	
	cout<<"Before swapping num1 = "<< num1 <<" num2 = "<< num2 << endl;
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	cout<<"After swapping num1 = "<< num1 <<" num2 = "<< num2 << endl;
	return 0;
}
