#include <iostream>
using namespace std;

//  global variable class ke bahar bante h
class Complex {
    // by default private
    // usually member variables ko private hi rakhenge
    int a;   // property names
    int b;
    // A AUR B MEMBER VARIABLES H
    // MEMBER VARIABLES CLASS KE DAAYRE MEIN GLOBLE HAI
    // INKI MEMORY CLASS KE OBJECT CALL HONE PE MILEGI 
    // a aur b class ke bahar bante tab global kehlate
    // functions ko generally public rakhenge

public:
    void setData(int x, int y)  // member functions 
    // ye instance member function h  
    // instance member function can access any memeber of the caller object
    {
        // x aur y local variable h setdata jab jab call hoga x aur y ko memory milegi
        a = x;
        b = y;
    }

    void showData(); // member functions 

    Complex add(Complex c) { // member function jo do complex numbers ko add karega
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

void Complex::showData() // member functions 
{
    cout << "Real " << a << " " << "Imaginary " << b << endl;
}

// outside class member function bana ke dekhte h
// class ke bahar showdata bana ke aise kre  taaki usse member function mana jaye
// iske liye usko class ke andar declare krte h....par membership label lagana padta h

int main() // ye non member function h
{
    Complex c1, c2, c3;
    c1.setData(3, 4); // setdata ko call krne wala object c1 hai
    // abhi a,b c1 intance/object ke hai
    c2.setData(5, 6);// iss baar a,b c2 object/instance ke h

    // c3=c1+c2;  // yeh line error de rahi thi kyunki + operator overload nahi kiya gaya hai
    
    c3 = c1.add(c2); // object function hai isliye dot operator se call hoga
    // add private members ko access kr rha h iss liye isko member function bnana padega 
    // ye c2 ki values access kar paye isliye isme c2 pass kr denge

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;  // semicolon lagana zaroori hai
}
