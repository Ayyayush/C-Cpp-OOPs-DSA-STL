#include <iostream>
using namespace std;

class Complex {
private:
    int a, b;   // a = real part, b = imaginary part

public:
    // ✅ Default constructor
    Complex() {
        a = 0;
        b = 0;
    }

    // ✅ Parameterized constructor
    Complex(int real, int imag = 0) {
        a = real;
        b = imag;
    }

    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void showData() {
        cout << "a = " << a << "  b = " << b << endl;
    }

    // ✅ Overloading +
    Complex operator+(Complex C) {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }

    // ✅ Overloading -
    Complex operator-(Complex C) {
        Complex temp;
        temp.a = a - C.a;
        temp.b = b - C.b;
        return temp;
    }

    // ✅ Overloading *
    Complex operator*(Complex C) {
        Complex temp;
        temp.a = a * C.a - b * C.b;   // (a+bi)(c+di) = (ac - bd) + (ad + bc)i
        temp.b = a * C.b + b * C.a;
        return temp;
    }

    // ✅ Overloading /
    Complex operator/(Complex C) {
        Complex t;
        int den = C.a * C.a + C.b * C.b;  // denominator = c² + d²
        t.a = (a * C.a + b * C.b) / den;
        t.b = (b * C.a - a * C.b) / den;
        return t;
    }

    // ✅ Overloading ==
    bool operator==(Complex C) {
        return (a == C.a && b == C.b);
    }

    // ✅ Return formatted string (real + imag i)
    void display() {
        cout << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex obj1(3, 2);       // 3 + 2i
    Complex obj2(1, 7);       // 1 + 7i

    Complex result;

    result = obj1 + obj2;
    cout << "Addition: ";
    result.display();

    result = obj1 - obj2;
    cout << "Subtraction: ";
    result.display();

    result = obj1 * obj2;
    cout << "Multiplication: ";
    result.display();

    result = obj1 / obj2;
    cout << "Division: ";
    result.display();

    if (obj1 == obj2)
        cout << "Both complex numbers are equal.\n";
    else
        cout << "Complex numbers are not equal.\n";

    return 0;
}
