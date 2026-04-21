#include <iostream>
using namespace std;

class Complex
{
private:
    int a;     // Real part
    int b;     // Imaginary part

public:
    // Parameterized constructor - values set kar raha hai
    Complex(int x, int y)
    {
        cout << "Storing the values of the object" << endl;
        a = x;
        b = y;
    }

    // Function to display values
    void showData()
    {
        cout << "Real: " << a << ", Imaginary: " << b << endl;
    }
};

int main()
{
    // Object array banaya without default constructor, isiliye values pass ki gayi
    Complex c[5] = {
        Complex(1, 2),
        Complex(5, 2),
        Complex(4, 2),
        Complex(8, 2),
        Complex(7, 2)
    };

    // Har object ke data ko display kar rahe hain
    for (int i = 0; i < 5; i++)
    {
        c[i].showData();
    }

    return 0;
}
