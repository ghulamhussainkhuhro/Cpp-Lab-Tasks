/*Task #2: A student will not be allowed to sit in exam if his/her attendance
 is less than 75%.

Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include<iostream>
using namespace std;
int main()
{
	int classes_held, classes_attended;
	
	cout<<"Enter number of classes held : ";
	cin>>classes_held;
	cout<<"Enter number of classes attended : ";
	cin>>classes_attended;
	
	float percentage;
	
	percentage=classes_attended*100/classes_held;
	cout<<"Your attendence percentage is : "<<percentage<<"%";
	if(percentage >= 75 && percentage <=100)
	cout<<"\nYou are elligible to sit in exam hall.";
	else
	cout<<"\nYou are not elligible to sit in exam hall."; 
	
	
	return 0;
}

