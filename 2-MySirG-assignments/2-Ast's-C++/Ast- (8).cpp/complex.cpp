#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;       
        int imaginary;  

    public:
        // Constructor to initialize real and imaginary parts        .... but here not studies yet
        void setvalues(int r = 0, int i = 0)    
        {
            real = r;
            imaginary = i;
        }

        // Function to display complex number
        void showData()
        {
            cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
        }
};

int main()
{
    Complex c1;
    c1.setvalues(4, 5);  // Complex number 4 + 5i
    c1.showData();

    Complex c2;
    c2.setvalues(10, -3);  // Complex number 10 - 3i
    c2.showData();  

    Complex c3;  // Default Complex number (0 + 0i)
    c3.showData();  

    return 0;
}
