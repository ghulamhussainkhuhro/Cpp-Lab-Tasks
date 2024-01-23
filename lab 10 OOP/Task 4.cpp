//Task # 4 Create a class that includes a data member that holds
 //a Serial numberù for each object created from the class.
 // That is, the first object created will be numbered 1, the second 2, and so on.
#include <iostream>
using namespace std;

class SerialNumberedObject {
    private:
        static int count;
        int serialNumber;

    public:
        SerialNumberedObject() {
            count++;
            serialNumber = count;
        }

        int getSerialNumber() {
            return serialNumber;
        }
};

int SerialNumberedObject::count = 0;

int main() {
    SerialNumberedObject obj1;
    SerialNumberedObject obj2;
    SerialNumberedObject obj3;

    cout << "Serial number of obj1: " << obj1.getSerialNumber() << endl;
    cout << "Serial number of obj2: " << obj2.getSerialNumber() << endl;
    cout << "Serial number of obj3: " << obj3.getSerialNumber() << endl;

    return 0;
}
