/*Task # 16: Write a program that declares an int variable,
  assign it a value of your choice. The program checks as:
	if the number is even make it odd number.
	if the number is odd prints its square. 
	if the number is equal to 0 make it a double figure number and prints its cube.
*/

#include<iostream>
using namespace std;
int main()
{
	int num=0;
	
	if(num%2==0 && num!=0)
	{
		cout<<"The entered number is even.\n";
		cout<<"the odd number is : "<<num+1;
	}
	
	if(num%2==1)
	{
		cout<<"The number entered is an odd number.\n";
		cout<<"The square if number is : "<<num*num;
	}
	
	if(num==0)
	{
		cout<<"Entered number is zero.\n";
		cout<<"Double figure number is : "<<num+20<<endl;
		cout<<"Cube of number is : "<<(num+20)*(num+20)*(num+20);
	}
	return 0;
}




