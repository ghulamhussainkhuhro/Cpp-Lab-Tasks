/*Task #6 : Write a C++ program that finds the smallest element in the array 
and also its index.
*/
#include<iostream>
using namespace std;
int main(){
	cout<<"Enetr any 10 member of your choice for an array  :\n";
	int array[10];
	for(int index=0;index<10; index++)
	{
		cout<<"Enter integer for index ["<<index<<"] : ";
		cin>>array[index];
		cout<<endl;
	}
	
	int smallest=array[0];
	int num=0;
	for(int index=0;index<10; index++)
	{
		if(array[index]<smallest)
		{
			smallest=array[index];
			num=index;
		}
	}
	cout<<"\v**************************************************************\n\n";
	cout<<"Smallest member of the array entered is : "<<smallest<<" at index ["<<num<<"]"<<endl;

}
