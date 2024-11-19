#include <iostream>
#include <string>
using namespace std;

// base class or mother class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
        protected:// similiar to private but can only be accessed in the inherited class
            string model;
};

//derived class or child clas
class Car: public Vehicle {
    public:
        void setModel(string m) {
            model = m;
        }
        string getModel() {
            return model;
        }
};

int main() {
    Car myCar;
    myCar.honk();
    myCar.setModel("Mustang");
    cout << "Model: " << myCar.getModel() << "\n";
    return 0; 
}