void swap (int* x, int* y) { // use the pointers of 2 values 
    int temp = *x;
    *x = *y;
    *y = temp;
}

int a = 2, b =7;
swap(&a, &b); // must use the addresses

//references are an neater alternative
void swap(int& x, int& y) 
{
    int temp = x;
    x = y;
    y = temp;
}

int a = 2 , b = 7;
swap(a, b);

// function to read data form a file into vector
void read_data(const string& , vector,float>& data) {
    // fname is a const reference because it isnt changed ( improves efficienct)
    //data is not const because it is changed
}

//function to compute the mean of values in a vectors
float mean_value(const vector<float>& data){
    // data can be const in this case because computing mean wont change it
}

