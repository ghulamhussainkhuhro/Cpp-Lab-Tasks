/*Task # 18  A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

#include<iostream>
using namespace std;
int main()
{
	int num,cost,netprice;
	cout<<"Enter number of units you want to buy : ";
	cin>>num;
	
	cost=100*num;

	if(cost>=1000)
	{
		cout<<"You have purchased more than 1000\n"<<"you will get 10% discout.\n";
		cout<<"Your net price i.e with discount included is : "<<cost-(cost*0.1);
	}
	
	if(cost<1000 && cost>0)
	{
		cout<<"You have purchased bellow 1000, you will not get discout.\n";
		cout<<"Your total bill is : "<<cost;
	}
	
	if(num<0)
	{
		cout<<"Invalid input!";
	}
	
	
	
	return 0;
}

