/*Task # 2	Write a function called zeroSmaller() that takes two integer
arguments by reference and then sets the smaller of the two 				
numbers to 0. Write a main function to exercise this function.
*/
#include<iostream>
using namespace std;
int zeroSmaller(int& a , int& b)
{
	if(a<b)
	{
	return	a=0;
	}
	else 
	{
	return	b=0;
	}
	
}
int main(){
	int x,y;
	cout<<"Enter 1st number  : ";
	cin>>x;
	cout<<"Enter 2nd number  : ";
	cin>>y;
	zeroSmaller(x,y);
	cout<<"After function call : \n1st number : "<<x<<endl;
	cout<<"2nd number : "<<y; 
}
