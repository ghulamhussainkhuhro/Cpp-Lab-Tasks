/*Task # 19: Develop a mark sheet application in java which fulfills 
the following requirements:
The program takes input from the user marks obtained in three subjects;
C++, Data Structures and Operating Systems.
o	The program calculates the total marks obtained out of 300.
o	Calculate the percentage.
o	Display the grade secured according to the following:
	90 >			Grade: A
	Between 90 and 80	Grade: B
	Between 79 and 70	Grade: C
	Between 69 and 60 	Grade: D
	Below 60		Grade: FAIL
*/

#include<iostream>
using namespace std;
int main()
{
	int tmarks=300 , obtained ,percentage;
	
	
	cout<<"Enter obtained marks : ";
	cin>>obtained;
	
	percentage=(obtained*100/tmarks);
	cout<<"your percentage is : "<<percentage;
	
		if(percentage>90)
			cout<<"\nGrade A ";
		
			
		if(percentage>=80 && percentage<=90)
			cout<<"\nGrade B ";
			
		if(percentage>=70 && percentage<=79)
			cout<<"\nGrade C ";
		
		if(percentage>=60 && percentage<=69)
			cout<<"\nGrade D ";

		if(percentage<60)
			cout<<"\nFail ";
			
		
	
	return 0;
}
