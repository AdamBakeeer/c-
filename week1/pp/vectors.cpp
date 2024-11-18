// vectors are c++ equivalent of arrays in java, c, and python
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
    vector<int> a; //vector(array) a that stores intgers
    vector<int> b(10); // creates a 10-element vector b that sores integers and is intiallized to 0's
    vector<int> c(5, -1);// creates a 5-element vector c that sores integers and is intiallized to -1's
    vector<int> d(c); // creats a new vector d that is a copy of c

    vector<string> p;
    vector<string> q(5, "xyz");// creates a vector 5-element vector that stores strings and is intiallized to xyz

    vector<string> words;

    words.push_back("Apple");//adds apple to the end, at index n-1
    words.push_back("Banana");
    words.push_back("Kiwi");
    cout << words.size() << endl; // prints length of the vector size

    cout << words[1] << endl; // prints string at index 1
    cout << words.at(1) << endl; // same as words[1] but does bounds check to ensure index is within the valid range, might be slower than words[1] due to bound checking

    words.pop_back(); // removes last element at index n-1
    cout << words.size() << endl;

    words.clear(); // empties vector
}