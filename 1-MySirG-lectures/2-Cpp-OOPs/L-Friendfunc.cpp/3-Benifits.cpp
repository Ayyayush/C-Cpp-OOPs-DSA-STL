#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    // Friend function to add two complex numbers
    friend complex add(complex, complex);        // Jitne args member mein hote hain usse ek jyada hote hain friend mein
                                                 // kyunki caller object bhi as argument paas hota hai

    // Friend function to overload << and >> operators
    friend ostream& operator<<(ostream&, complex);     // << ko sirf friend function se hi overload kiya ja sakta hai
    friend istream& operator>>(istream&, complex&);    // >> ko bhi friend se hi define karna padta hai
};

// Adding two complex numbers using friend function
complex add(complex c1, complex c2)
{
    complex temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

// Overloading << using friend function
ostream& operator<<(ostream& out, complex c)
{
    out << c.a << " + " << c.b << "i";
    return out;
}

// Overloading >> using friend function
istream& operator>>(istream& in, complex& c)
{
    cout << "Enter real part: ";
    in >> c.a;
    cout << "Enter imaginary part: ";
    in >> c.b;
    return in;
}

int main()
{
    complex c1, c2, c3;

    // Using >> operator to input values
    cin >> c1;
    cin >> c2;

    // Adding c1 and c2 using friend function
    c3 = add(c1, c2);     // add(c1, c2) — yaha 2 arguments diye kyunki ye non-member hai

    // Using << operator to display
    cout << "Sum: " << c3 << endl;

    return 0;
}
