/*Task # 13 Implement a C++ program with name Address.cpp. An address has
"a house number,
"a street,
"an optional apartment number,
"a city,
"a state and a
"postal code.
Supply values at run time and print the address with the street on one line 
and the city, state, and postal code on the next line.*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int housenum, apartnum, postalcode;
	
	string street, city, state;
	
	
	cout<<"Enter your house number : "<<housenum<<endl;
	cin>>housenum;
	 
	cout<<"Enter your street name : "<<street<<endl;
	cin>>street;
	
	cout<<"Enter your appartment number : "<<apartnum<<endl;
	cin>>apartnum;
	
	cout<<"Enter your city name : "<<city<<endl;
	cin>>city;
	
	cout<<"Enter your state name : "<<state<<endl;
	cin>>state;
	
	cout<<"Enter your postal code : "<<postalcode<<endl;
	cin>>postalcode;
	
	
	cout<<"Your address is : \n"<<housenum<<" "<<street<<" "<<apartnum<<endl;
	
	cout<<city<<" "<<state<<" "<<"Postal code : "<<postalcode<<endl;
	return 0;
	
	
}

