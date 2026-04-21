#include <iostream>
using namespace std;

// Base class M
class M {
protected:
    int m;
public:
    void get_m(int x) {
        m = x;
    }
};

// Base class N
class N {
protected:
    int n;
public:
    void get_n(int y) {
        n = y;
    }
};

// Derived class P, inheriting from both M and N
class P : public M, public N {
public:
    void display(void) {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
        cout << "m * n = " << m * n << endl;
    }
};

// Main function
int main() {
    P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
    return 0;
}
