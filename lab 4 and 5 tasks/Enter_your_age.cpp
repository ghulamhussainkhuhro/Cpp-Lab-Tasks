#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	
	if(age < 0)
	{cout<<"Invalid age.";
	
	
	if (age>0 && age<10)
	{cout<<"You are a child.";
	}
	
	else if (age>=10 && age<=19)
	{cout<<"You are a teenager.";
	}
}
	else
	{cout<<"You are older than 19.";
	}
	
	
	return 0;
}
