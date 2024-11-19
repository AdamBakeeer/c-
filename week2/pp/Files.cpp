#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /*CREATING AND WRITING TO A FILE*/
    //creat and open a text file
    ofstream MyFile("filename.txt");

    //write to the file
    MyFile << "Files can be tricky but it is fun enough!";

    MyFile.close();
    /*Read from a file*/
    //create a text string , used to output text file
    string myText;

    //read from file
    ifstream MyReadFile("filename.txt");

    //use while loop with getline function to read the file line by line
    while (getline (MyReadFile, myText)) {
        //OUTPUT THE TEXT FROM THE FILE
        cout << myText;
    }

    //close the file
    MyFile.close();
     
}