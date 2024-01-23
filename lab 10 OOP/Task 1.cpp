//Task # 1 Create a class having 4 functions, add, sub, muland div.
// Each function accepts 2 parameters and returns the sum, difference, multiplication
// and division of these numbers
//Create a main () function that uses the above class.
#include <iostream>
using namespace std;

class SimpleCal {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }
    
    int sub(int  num1, int num2) {
        return num1 - num2;
    }
    
    int mul(int num1, int num2) {
        return num1 * num2;
    }
    
    int div(int num1, int num2) {
        return (num2 != 0) ? num1 / num2 : NULL;
    }
};

int main() {
    SimpleCal calculator;
    
    int  num = 10;
    int  num1 = 5;
    
    cout << "num1 = " << num << endl;
    cout << "num2 = " << num1 << endl;
    cout << "Addition: " << calculator.add(num, num1) << endl;
    cout << "Subtraction: " << calculator.sub(num, num1) << endl;
    cout << "Multiplication: " << calculator.mul(num, num1) << endl;
    cout << "Division: " << calculator.div(num, num1) << endl;
    
    return 0;
}
