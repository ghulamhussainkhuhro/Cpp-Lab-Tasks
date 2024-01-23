/*Task#3 Write a function called swap() that interchanges two int values 			  
passed to it by the calling program.
*/

#include<iostream>
using namespace std;
int swap(int &a , int &b)
{
	int temp;
	    temp=a;
	    a=b;
	    b=temp;
}
int main(){
	int x,y;
	cout<<"Before function call : \nEnter 1st number  : ";
	cin>>x;
	cout<<"Enter 2nd number  : ";
	cin>>y;
	swap(x,y);
	cout<<"After function call : \n1st number : "<<x<<endl;
	cout<<"2nd number : "<<y; 
}
