/*Task#6 Write a C++ program that prompts the user to enter any
 character and the program checks as:
"the character is a lower case character case or upper case character
"if it is a lower case then convert it into upper case. 
"if it is an upper case then convert it into lower case.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ch;
	char letter;
	cout<<"Enter any character : ";
	cin>>letter;
	
	
	if(letter>='a' && letter<='z')
	{
	    cout<<"\nCharacter you have entered is in lower case.";
		cout<<"\nUpper case of this character is : "<<char(letter - 32);
    }
	
    else if(letter>='A' && letter<='Z')
	{
		cout<<"\nCharacter have entered is upper case.";
		cout<<"\nLower case of this character is : "<<char(letter + 32);
    }
    else
    cout<<"Please enter valid letter";
	return 0;
}
