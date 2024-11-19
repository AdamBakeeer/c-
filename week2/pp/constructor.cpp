// A constructor in C++ is a special method that is automatically called when an object of a class is created.
#include <iostream>
#include <string>
using namespace std;
//standard constructor
class MyClass {
    public: // access specifier
    MyClass() { // Constructor
        cout << "Hello World!";
    }
};

// constructor with parameters construct can also be placed outside the class just like the methods
class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) { // constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
};

int main() {
    MyClass myObj; // when creating an object of the class this will call the constructor

    // creat a car object with different values for the constructor
    Car carObj1("BMW", "X5", 1999);
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    return 0;


}