/*Task #2 Consider the array in  Task 1  
Write a C++ program that print the all elements of the 
array in reverse order, As 25,20, …5.  
*/

#include<iostream>
using namespace std;
int main(){
	
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);
	cout<<"The array in reverse order  willbe : "<<endl;
	for(int index=size-1; index>=0; index--)
	{
			cout<<array[index]<<" , ";
	}

}
