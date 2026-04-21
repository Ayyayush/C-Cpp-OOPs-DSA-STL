#include <iostream>
using namespace std;

class complex
{
    int a; // property names
    int b;

public:
    void setData(int x, int y) // member functions
    {
        a = x;
        b = y;
    }

    void showData();

    // add ko member fubnction bnaye ya nhi ye iss baat pe deoend karega ki add ko member variables ye member fucntions  access krne pad rhe h ya nhi
    complex add(complex C) // return type "complex" lagana padega
    {
        complex temp;
        // temp complex type ka bna rhe h taaki return hone pe complex hone ki wajeh se ye complex mein store ho sake
        temp.a = a + C.a; // c2 ka a access kr rhe h
        temp.b = b + C.b; // c2 ke b ko access kr rha h
        // yha pe c3 ko store krne ke liye use toh kr nhi skte kyunki wo main mein bana h isliye yha se return karake c3 mein store kr lenge
        // complex type ki value return karega kyunki c3 complex type ka h
        return temp;
    }
};

// membership label
void complex::showData() // member functions
{
    cout << "Real" << a << " " << "Imaginary" << b << endl;
}

int main() // ye non member function h
{
    complex c1, c2, c3;
    c1.setData(3, 4); // setdata ko call krne wala object c1 hai
                      // abhi a,b c1 intance/object ke hai
    c2.setData(5, 6); // iss baar a,b c2 object/instance  ke h
    //c3=c1+c2 this line will give a error 

    // compiler ko pata nhi h ki complex number ko add krte kaise h
    // c1.add(c2); // object function hai isliye dot operator se call hoga
    // add private members ko access kr rha h iss liye isko member function bnana padega
    // ye c2 ki values access kar paye isliye isme c2 pass kr denge
    c3 = c1.add(c2);
    // yha pe ye ho rha h ki c1 caller object h juisne add function ko call kiya c2 usme as an arguement pass kiya 
    //add function ne jo return kiya wo aake c3 mein assign ho gya 

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}
