/*Task # 22 Write a C++ program to convert seconds to minutes and minutes to  hours 
Sample Output:
Input seconds: 3600                                                  
Minutes: 600
Hours: 10 
*/

#include<iostream>
using namespace std;
int main()
{
	float sec,min,hour;
	cout<<"Enter time in seconds : ";
	cin>>sec;
	
	cout<<sec<<" seconds = "<<sec/60<<" minutes.\n";
	cout<<sec<<" seconds = "<<sec/3600<<" hours.\n";
	
	cout<<"Enter time in minutes : ";
	cin>>min;
	
	cout<<min<<" minutes = "<<min*60<<" seconds.\n";
	cout<<min<<" minutes = "<<min/60<<" hours.\n";
	
	cout<<"Enter time in hours : ";
	cin>>hour;
	
	cout<<hour<<" hours = "<<hour*60<<" minutes.\n";
	cout<<hour<<" hours = "<<hour*3600<<" seconds.\n";
	
	
	
	return 0;
}


