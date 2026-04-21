#include <iostream>                          // input-output stream ke liye
using namespace std;                         // std namespace use karne se cout, cin directly use ho jaate hain

// Class definition of 'complex'
class complex
{
    int a, b;                                // do private member variables: a and b (default private hote hain)

public:
    // Member function to initialize the values of a and b
    void setdata(int a, int b)
    {
        this->a = a;                         // 'this' pointer current object ka pointer hota hai
        this->b = b;                         // this->a matlab class ka member 'a' ko value assign kar rahe ho
    }

    // Member function to display the values of a and b
    void showdata()
    {
        cout << "\na = " << a << ", b = " << b << endl;     // formatted output ke liye comma and label add kiya
    }

    // Ab hum class ke bahar ek function banayenge jo dynamically complex ka object banayega
};

// Non-member function jiska kaam hai complex class ka dynamic object banana
void f1()
{
    // Dynamic object creation using 'new' keyword
    complex *p = new complex();              // 'p' ek pointer hai jo heap mein ek complex object banata hai

    // Object ke members ko initialize karna using pointer
    p->setdata(3, 4);                        // -> ka use pointer ke through member function call karne ke liye hota hai

    // Display values of members
    p->showdata();                           // object ke andar ke values print kar rahe hain

    // (Optional) Delete object to avoid memory leak
    delete p;                                // memory free karna zaroori hota hai jab dynamic memory allocate karo
}

// Main function: Program execution starts from here
int main()
{
    f1();                                    // f1() ko call kiya jo complex object create karke show karta hai
    return 0;
}
