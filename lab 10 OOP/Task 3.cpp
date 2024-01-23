//Task # 3 Create an employee class
//. The member should comprise an int for storing the employee number, 
//and float for the employee’s salary. 
//Member functions should allow the user to enter this data and display it. 
//Write a main() function that allows the user to enter data for three employees
// and display it.

#include <iostream>
using namespace std;
class Employee {
    private:
        int empNumber;
        float empSalary;

    public:
        Employee() {
            empNumber = 0;
            empSalary = 0.0;
        }

        void setData(int num, float sal) {
            empNumber = num;
            empSalary = sal;
        }

        void displayData() {
            cout << "Employee number: " << empNumber << endl;
            cout << "Employee salary: " << empSalary << endl;
        }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        int empNum;
        float empSal;

        cout << "Enter employee number: ";
        cin >> empNum;

        cout << "Enter employee salary: ";
        cin >> empSal;

        employees[i].setData(empNum, empSal);
    }

    cout << "Employee data:" << endl;

    for (int i = 0; i < 3; i++) {
        employees[i].displayData();
    }

    return 0;
}