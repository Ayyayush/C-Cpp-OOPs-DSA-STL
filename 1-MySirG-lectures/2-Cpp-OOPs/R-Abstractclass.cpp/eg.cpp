#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "\nIn Display Base";
    }

    // Virtual function for runtime polymorphism
    virtual void show() {
        cout << "\nIn Show Base";
    }
};

// Derived class
class Derived : public Base {
public:
    void display() {
        cout << "\nIn Display Derived";
    }

    void show() {
        cout << "\nIn Show Derived";
    }
};

int main() {
    Base B;
    Derived D;
    Base* bptr;

    cout << "\n\nbptr points to Base 'B'";
    bptr = &B;
    bptr->display();  // Calls Base version (non-virtual)
    bptr->show();     // Calls Base version (virtual)

    cout << "\n\nbptr points to Derived 'D'";
    bptr = &D;
    bptr->display();  // Calls Base version (non-virtual, no overriding)
    bptr->show();     // Calls Derived version (virtual override)

    return 0;
}
