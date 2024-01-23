/*Task # 1   Create a function called Largernum()  that receives two integer
numbers as arguments and returns the Larger number out of them. 
*/

#include<iostream>
using namespace std;
int largernum(int a , int b)
{
	if(a>b){
		return a;
	}
	else
	return b;
}
int main(){
	int x,y;
	cout<<"Enter a number : ";
	cin>>x;
	cout<<"Enter another number : ";
	cin>>y;
	cout<<"\nlarger number is : "<<largernum(x,y);
	
}
