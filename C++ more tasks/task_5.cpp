/*Task # 5 Write three C++ statements using cout, <<, and endl: 

(a)	one that defines three variables length, width, and area on one line.

(b) another that takes values for length and width variables from the user at runtime 
(c) another that calculates and outputs the area. (Area=length * width)*/

#include<iostream>
using namespace std;
int main()
{
	int length, width, area;
	cout<<"Enter measurement of length : ";
	cin>>length;
	cout<<"Enter measurement of width : ";
	cin>>width;
	cout<<"Area of rectangle is : "<<length*width;
	
	return 0;
}

