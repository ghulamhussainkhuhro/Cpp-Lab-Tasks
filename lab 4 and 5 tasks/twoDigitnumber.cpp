#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter any number : ";
	cin>>x;
	if( x > 9 && x < 100)
	cout<<"number entered is a two digit number.";
	else
	cout<<"number entered is not two digit number.";
	return 0;
}
