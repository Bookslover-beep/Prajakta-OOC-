#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }
    void operator-() {
        feet--;
        inch--;
    }
    void display() {
        cout << "\nFeet & Inches (Decrement): " << feet << " " << inch << endl;
    }
};

int main() {
	
	cout << "Name  : Prajakta Arun Magar\n";
    cout << "Roll No: 14\n";
    cout << "Class : S.Y.CSE-B\n";
    
	
    Distance d1(8, 9);
    -d1; 
    d1.display();
    return 0;
}
