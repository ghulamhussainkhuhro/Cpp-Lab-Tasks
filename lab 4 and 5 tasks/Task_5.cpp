/*Task # 5(a): Consider an integer value give:
  int num=5;
display the square of the number given when the spacebar key on the keyboard will pressed.
*/

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	
	int num;
	
	cout<<"Enter any nuber : ";
	cin>>num;
	
	char key=getch();
	
	if(key==' ')
	cout<<"Square of number is : "<<num*num;
	
	else
	cout<<"Please enter valid key to get square of number.";
	
	
	return 0;
}
