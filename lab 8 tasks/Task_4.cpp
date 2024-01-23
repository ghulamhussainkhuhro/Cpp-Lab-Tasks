/*Task #4 Consider the array in  Taskno.3 . 
Write a C++ program that finds and prints all odd numbers in the given array.
*/

#include<iostream>
using namespace std;
int main(){
	int array[10]={1,2,3,5,8,10,12,23,28,15};
	
	cout<<"Odd numbers in the array[10]={1,2,3,5,8,10,12,23,28,15} are : "<<endl;
	for(int index=0;index<10;index++)
	{
		if(array[index]%2!=0)
		{
			cout<<array[index]<<" at index ["<<index<<"] is odd number."<<endl;
		}
			
	 }

}
