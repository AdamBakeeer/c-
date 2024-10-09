#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void read_data(istream& input, vector <float>& data)
{
    float value;
    while (input >> value) {
        data.push_back(value);
    }

}

float mean_value(const vector <float>& data)
{
    float total;
    int size = data.size();

    for (int i = 0; i<size; i++){
        total = total + data[i];
    }

    float mean = total/size;

    return mean;
}

int main(int argc, char* argv[])
{
    if (argc != 2) {
        cerr << "Usage: ./mean <filename>" << endl;
        return 1;
    }
    
    ifstream infile(argv[1]);
    if (not infile) {
        cerr << "Error: cannot access " << argv[1] << endl;
        return 2;
    }

    vector<float> data;

    read_data(infile, data);

    cout << data.size() << " values read from file" << endl;

    cout << "Mean value = " << mean_value(data) << endl;

    return 0; 
}