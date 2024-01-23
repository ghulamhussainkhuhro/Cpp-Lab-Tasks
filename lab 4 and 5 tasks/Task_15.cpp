/*Task #: 15 Write a C++ program that takes a single character 
as input and tells whether it is a vowel or a consonant. (Use Conditional operator)*/

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter any alphabet letter : ";
	cin>>ch;
	
	
	cout<<((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?"Vowel" : "Consonant");
	
	
	return 0;
}


