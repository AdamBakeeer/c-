#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
    ///private attribute cant be accessed from outside the class
        int salary;
    
    public:
    //setter in order to set a value for a private attribute a setter must be used
    void setSalary(int s) {
        salary = s;
    }

    //Getter to print a value from a private attribute
    int getSalary () {
        return salary;
    }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary() << endl;
    return 0;

}