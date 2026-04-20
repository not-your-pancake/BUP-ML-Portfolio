#include <iostream>
using namespace std;

struct Car{
    int model;
    string brand;
    float price;    
};

int main (){

// 2. Define a structure Car with members: model, brand, and price. Dynamically allocate
// memory for one Car structure using a pointer, take input, and display the data using the
// -> operator.
    Car c;
    Car *cptr;

    cptr = &c;

    cptr -> model = 1101; 
    cptr -> brand = "xcorolla";
    cptr -> price = 2500.50;

    cout << "Car Details:\n";
    cout << "Model: " << cptr -> model << "\n";
    cout << "Brand: " << cptr -> brand << "\n";
    cout << "Price: " << cptr -> price << "\n";

    return 0;

}