#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;                      // 'a' real part hai, 'b' imaginary part

public:
    void setData(int x, int y)     // Complex number ke liye values set karo
    {
        a = x;
        b = y;
    }

    void showData()                // Complex number dikhane ke liye
    {
        cout << a << " + " << b << "i" << endl;
    }

    // Friend functions ka declaration freind keyword lagana must h 
    friend Complex operator+(Complex, Complex);   // Addition      // extra args kyunki friend function h 
    friend Complex operator-(Complex, Complex);   // Subtraction
    friend Complex operator*(Complex, Complex);   // Multiplication
};

// Friend function: addition
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}

// Friend function: subtraction
Complex operator-(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a - Y.a;
    temp.b = X.b - Y.b;
    return temp;
}

// Friend function: multiplication (formula used: (a+bi)*(c+di) = (ac - bd) + (ad + bc)i)
Complex operator*(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a * Y.a - X.b * Y.b;
    temp.b = X.a * Y.b + X.b * Y.a;
    return temp;
}

int main()
{
    Complex c1, c2, sum, diff, prod;

    c1.setData(3, 2);        // c1 = 3 + 2i
    c2.setData(1, 7);        // c2 = 1 + 7i

    sum = c1 + c2;           // operator+ call
    diff = c1 - c2;          // operator- call
    prod = c1 * c2;          // operator* call

    cout << "Sum: ";
    sum.showData();

    cout << "Difference: ";
    diff.showData();

    cout << "Product: ";
    prod.showData();

    return 0;
}
