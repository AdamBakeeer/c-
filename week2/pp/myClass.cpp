#include <iostream>
#include <string>

class MyClass {
    public:
        int myNum;
        std :: string myString;
};

using namespace std;

int main() {
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some Text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;

}