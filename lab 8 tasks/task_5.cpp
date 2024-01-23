/*Task #5 :  Write a C++ program that prints the second last element 
in the array created in Task 2 And also displays the sum and product of 
last two elements of the array. 
*/

#include<iostream>
using namespace std;
int main(){
	
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);
	int sum=0;
	cout<<"The give array is : array[]={5,10,15,20,25} "<<endl;
	cout<<"The 2nd last member of array is : "<<array[size-2]<<endl;
	cout<<"The sum of last two member of array is : "<<array[size-1]+array[size-2]<<endl;
	cout<<"The product of last two member of array is : "<<array[size-1]*array[size-2]<<endl;
	
	
	
}
