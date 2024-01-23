/*Task # 24: Write a C++ program that takes a single word from the user 
and prints only the first character. 
Example: Line Entered    Programming Fundamentals 
Output should be 
First letter: P

*/

#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter a line : ";
	
	cin>>ch;
	
	cout<<"First letter of First word is : "<<ch;
	
	return 0;
}

