#include <iostream>
#include <string>

class Car {
    public:
        std :: string brand;
        std :: string model;
        int year;
};

using namespace std;

int main() {
    // Create an object of car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // create another object of a car
    Car carObj2;
    carObj2.brand = "BMW";
    carObj2.model = "M3";
    carObj2.year = 2022;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year <<"\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year <<"\n";

    return 0;
}