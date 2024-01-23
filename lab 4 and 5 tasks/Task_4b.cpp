/*Task # 4(b): Write a program that will ask the user to enter any number and
 the program checks whether the entered number is  a double figure number.    */
 
 #include<iostream>
 using namespace std;
 int main()
 {  
 	int num;
	
	cout<<"Enter any number : ";
	cin>>num;
	
	if(num>9 && num<100)
	cout<<"It is a double figure number.";
	else
	cout<<"It is not double figure number.";
	
 	
 	return 0;
 }
