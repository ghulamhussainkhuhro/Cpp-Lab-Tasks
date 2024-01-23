/*Task # 1:  Write a C++ program that creates and initializes 
an array of type integer as :

	 	    int array[]={5,10,15,20,25}; 
			and computes the SUM of the elements in  an array*/

#include<iostream>
using namespace std;
int main(){
	
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);
	int sum=0;
	for(int index=0; index<size; index++)
	{
		sum+=array[index];
	}
	cout<<"The sum of array members is : "<<sum<<endl;
	
	
}
