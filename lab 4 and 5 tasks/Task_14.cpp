/*Task #14: Take three numbers from the user and print the greatest number.  Test Data
Input the 1st number: 25 
Input the 2nd number: 78 
Input the 3rd number: 87
Expected Output: 
The greatest: 87
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    	int num1,num2,num3;
	cout<<"Enter first number : ";
	cin>>num1;
	
	cout<<"Enter second number : ";
	cin>>num2;
	
	cout<<"Enter third number : ";
	cin>>num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "The greatest number is: " << num1 << endl;
    else if (num2 >= num1 && num2 >= num3)
        cout << "The greatest number is: " << num2 << endl;
    else
        cout << "The greatest number is: " << num3 << endl;

    return 0;
}


