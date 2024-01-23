/*Task # 1 Create a Structure called employee that contains two members: 			
		an employee number (type int) and the 
		employee’s salary (type float). 
		Ask the user to fill this data for two employees, store it in two 
		variables of type struct employee, and then display the 					
		information for each employee.	

*/
#include<iostream>
using namespace std;
struct employee{
	int employeeno;
	float employee_salary;
};
int main(){
	employee employee1,employee2;
	
	cout<<"For employee 1 : \nEnter employee's number : ";
	cin>>employee1.employeeno;
	
	cout<<"Enter employee's salary : ";
	cin>>employee1.employee_salary;
	
	cout<<"\n\nFor employee 2 : \nEnter employee's number : ";
	cin>>employee2.employeeno;
	cout<<"Enter employee's salary : ";
	cin>>employee2.employee_salary;
	
	cout<<"\n\n\nEmployee 1 : \nEmployee's number : "<<employee1.employeeno<<endl;
	cout<<"Employee's salary : "<<employee1.employee_salary<<endl;

	cout<<"\n\n\nEmployee 2 : \nEmployee's number : "<<employee2.employeeno<<endl;
	cout<<"Employee's salary : "<<employee2.employee_salary<<endl;


}
