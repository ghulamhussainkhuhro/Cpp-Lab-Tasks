//Task # 5 Demonstrate the use of the following: 
//Constructor 
//Access specifiers  private and public. 
//Set() and ge() functions.
//static class members.
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        static int count;

    public:
        Student() {
            count++;
        }

        void setName(string n) {
            name = n;
        }

        string getName() {
            return name;
        }

        void setAge(int a) {
            age = a;
        }

        int getAge() {
            return age;
        }

        static int getCount() {
            return count;
        }
};

int Student::count = 0;

int main() {
    Student s1;
    s1.setName("ALI");
    s1.setAge(20);

    Student s2;
    s2.setName("KAMRAN");
    s2.setAge(22);

    cout << "Student 1 name: " << s1.getName() << endl;
    cout << "Student 1 age: " << s1.getAge() << endl;

    cout << "Student 2 name: " << s2.getName() << endl;
    cout << "Student 2 age: " << s2.getAge() << endl;

    cout << "Number of students created: " << Student::getCount() << endl;

    return 0;
}
