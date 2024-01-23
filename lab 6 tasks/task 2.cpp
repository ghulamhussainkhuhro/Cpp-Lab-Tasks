/*Task # 2	Create a Structure called Students that contains two members: 
		 student’s obtained marks type(int).
		 total marks (type int) 
		 Ask the user  for obtained marks and total marks, store it in a 				 
		 variable of type struct student, and then display the percentage.	
*/

#include<iostream>
using namespace std;
struct students{
	int obtained_marks;
	float total_marks;
};
int main(){
	students student1 , student2;
	
	cout<<"For student 1 : \nEnter obtained marks : ";
	cin>>student1.obtained_marks;
	
	cout<<"Enter total marks : ";
	cin>>student1.total_marks;
	
	cout<<"\n\nFor student 2 : \nEnter obtained marks : ";
	cin>>student2.obtained_marks;
	
	cout<<"Enter total marks : ";
	cin>>student2.total_marks;
	
	cout<<"\n\n*****************************************************************\n";
	cout<<"\nstudent 1 has got : "<<student1.obtained_marks/student1.total_marks*100<<" % "<<endl;
	
	cout<<"\n\n\nstudent 2 has got : "<<student2.obtained_marks/student2.total_marks*100<<" % "<<endl;
	

	
}
