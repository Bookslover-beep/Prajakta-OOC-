
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class FourWheeler {
public:
    FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};

class Car : public Vehicle, public FourWheeler {
public:
    Car() { cout << "This 4 Wheeler Vehicle is a Car\n"; }
};

int main() {
	
    cout << "Name  : Prajakta Arun Magar\n";
    cout << "Roll No: 14\n";
    cout << "Class : S.Y.CSE-B\n";
    
    Car obj;
    cout << "Program demonstrating Multiple Inheritance\n";

    return 0; 
}
