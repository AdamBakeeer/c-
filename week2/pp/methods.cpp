#include <iostream>
#include <string>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

class MyClass2 {        // The class
  public:              // Access specifier
    void myMethod2();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass2::myMethod2() {
  cout << "Hello World!";
}

// Method and construct with parameters
class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}


int main() {
  MyClass myObj;
  MyClass2 myobj2;
  Car car;                // Create an object of MyClass
  myObj.myMethod();// Call the method
  myObj.myMethod();
  cout << car.speed(200);


  return 0;
}