#include <iostream>
using namespace std;

// Base class B
class B {
    int a;           // private member
public:
    int b;           // public member

    // Sets values for a and b
    void set_ab() {
        a = 5;
        b = 10;
    }

    // Returns value of a
    int get_a() {
        return a;
    }

    // Prints value of a
    void show_a() {
        cout << "a = " << a << endl;
    }
};

// Derived class D inherits from B
class D : public B {
    int c;           // private member of D
public:
    // Calculates c = b * a
    void mul() {
        c = b * get_a();   // get_a() is inherited from B
    }

    // Displays values of a, b, c
    void display() {
        cout << "a = " << get_a() << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

// Main function
int main() {
    D d;              // Object of derived class D

    d.set_ab();       // Sets a = 5, b = 10
    d.mul();          // c = b * a = 10 * 5 = 50
    d.show_a();       // Output: a = 5
    d.display();      // Output: a = 5, b = 10, c = 50

    d.b = 20;         // Update value of b to 20
    d.mul();          // Recalculate c = 20 * 5 = 100
    d.display();      // Output: a = 5, b = 20, c = 100

    return 0;
}








#include <iostream>
using namespace std;

class B {
    int a;
public:
    int b;
    void set_ab(void);
    int get_a(void);
    void show_a(void);
};

class D : public B {
    int c;
public:
    void mul(void);
    void display(void);
};

// Member function definitions

void B::set_ab(void) {
    a = 5;
    b = 10;
}

int B::get_a(void) {
    return a;
}

void B::show_a(void) {
    cout << "a = " << a << endl;
}

void D::mul(void) {
    c = b * get_a();
}

void D::display(void) {
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

// Main function

int main() {
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}
