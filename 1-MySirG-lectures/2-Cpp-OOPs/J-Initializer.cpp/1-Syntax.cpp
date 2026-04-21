#include <iostream>
using namespace std;

class complex {
private:
    int a;		// Real part
    int b;		// Imaginary part

public:

    // Default constructor
    //colon laga ke body se pehle jo likhte h wo h initialization list 
    complex() : a(0), b(0) {
        // Nothing to do here
    }

    // Constructor with only real part
    complex(int x) : a(x), b(0) {
        // Nothing to do here
    }

    // Constructor with both real and imaginary part
    complex(int x, int y) : a(x), b(y) {
        cout << "Hello" << endl;	// Just a message
    }

    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void showData() {
        cout << "Real " << a << " Imaginary " << b << endl;
    }
};

int main() {
    complex c1(8, 9), c2(4), c3(1, 7);	// Constructor overloading
    complex c4 = c1;					// Copy constructor (default)

    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();

    return 0;
}
