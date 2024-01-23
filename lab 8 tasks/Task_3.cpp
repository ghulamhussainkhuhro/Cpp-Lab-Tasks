/*Task#3  Consider the following interger array of size 10. 
  
              int array[10]={1,2,3,5,8,10,12,23,28,15}; 

Write a c++  program that takes an integer value from 
the user at runtime and finds that value in the given array . 
If the value is found display Message “Number is Found “ else display 
Message  “Number does not Found “.
*/
#include<iostream>
using namespace std;
int main(){
	int num;
	int array[10]={1,2,3,5,8,10,12,23,28,15};
	
	cout<<"Enter any number : ";
	cin>>num;
	for(int index=0;index<10;index++)
	{
		if(array[index]==num)
		{
			cout<<"Number is found at array index ["<<index<<"]"<<endl;
			return 0;
		}
		else 
		{
			cout<<"Number is not found at array index ["<<index<<"]"<<endl;
		}	
	 }
	   

	
	
}
