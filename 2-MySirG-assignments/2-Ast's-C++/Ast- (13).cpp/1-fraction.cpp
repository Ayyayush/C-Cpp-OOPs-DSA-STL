#include <iostream>                           // Input/output ke liye header file
using namespace std;

// Function to calculate HCF (Highest Common Factor)
long hcf(long a, long b)
{
    long h;
    for (h = (a < b ? a : b); h >= 1; h--)    // Jo chhota number hai wahi se loop start
        if (a % h == 0 && b % h == 0)         // Dono number h se divisible hon to h HCF hai
            return h;
    return 1;                                 // Safety return (in case h=0 wali situation ho)
}

// Fraction class to handle fractions
class fraction 
{
private:
    long numerator;                           // Numerator of the fraction
    long denominator;                         // Denominator of the fraction

public:
    // Constructor with default values
    fraction(long n = 0, long d = 1) : numerator(n), denominator(d) 
    {
        if (denominator == 0) {               // Agar denominator 0 ho to error handle
            cout << "Denominator cannot be zero. Setting it to 1.\n";
            denominator = 1;
        }
    }

    // Operator overloading for '+'
    fraction operator+(fraction f)
    {
        fraction temp;
        // LCM method: cross multiply and add
        temp.numerator = numerator * f.denominator + f.numerator * denominator;
        temp.denominator = denominator * f.denominator;

        long h = hcf(temp.numerator, temp.denominator); // HCF se simplify karenge
        temp.numerator /= h;
        temp.denominator /= h;

        return temp;
    }

    // Operator overloading for '<' (comparison)
    bool operator<(fraction f)     
    {
        return numerator * f.denominator < f.numerator * denominator;  // Cross multiply for comparison
    }

    // Function to display the fraction
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    fraction f1(1, 2);          // 1/2
    fraction f2(1, 3);          // 1/3

    fraction sum = f1 + f2;     // Add f1 and f2

    cout << "Sum of fractions: ";
    sum.display();              // Output: 5/6

    if (f1 < f2)
        cout << "f1 is smaller than f2" << endl;
    else
        cout << "f2 is smaller than or equal to f1" << endl;

    return 0;
}
