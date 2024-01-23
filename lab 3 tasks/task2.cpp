/*Task # 2 Write a C++ program in which declare some variables
with valid identifiers and conventions rule, to hold your name,
your total marks in previous semester, percentage, your grade,
your status of pass or fail etc, assign them explicitly and print them.
Try to declare variables of all (8) data types and assign the appropriate values.*/

#include<iostream>
using namespace std;
int main(){
	string mystring = "Ghulam Hussain";
	int total_marks = 550;
	int obtained_marks = 488;
	float percentage = 88.7272;
	char grade = 'A';
	string mystring1 = "Pass";
	
	cout<<"Your name :"<<mystring<<endl;
	cout<<"Your total marks :"<<total_marks<<endl;
	cout<<"Your obtained marks :"<<obtained_marks<<endl;
	cout<<"Your percentage :"<<percentage<<endl;
	cout<<"Your grade :"<<grade<<endl;
	cout<<"Your status :"<<mystring1;
		
	return 0;
}

