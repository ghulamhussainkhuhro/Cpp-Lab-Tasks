/*Task # 5(b): Write a program that will ask the user to enter any number and
 the program checks whether the entered number is  an even number or odd number.*/
 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int num;
 	cout<<"Enter any number : ";
 	cin>>num;
 	
 	if (num%2 == 0)
 	cout<<"Number Entered is Even";
 	
 	else
 	cout<<"Number Entered is Odd.";
 	
 	return 0;
 }
