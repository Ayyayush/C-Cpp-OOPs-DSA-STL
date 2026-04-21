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

    // FRIEND FUNCTION
   //   friend void f1(); // .... class ke andar hi declare karenge 
   // c1 wala syntax valid karane ke liye declaration change krna padega
   // freind keyword bas declaration ke time hi lagta h ....defintion mein nhi lagta h 
    friend void f1(complex);         // ✅ friend function ka sahi declaration

    // c3=5+c1; isko valid karane ke liye
    // kyunki + operator ko 2 operand chahiye 
    friend complex operator+(int, complex);
    friend complex operator-(complex);     // ✅ friend operator- declared

    // ❌ Yeh galti thi: f1 function ko class ke andar define kiya gaya hai, 
    // par friend function hamesha class ke bahar define hota hai
};

// ✅ friend function ko class ke baahar define karo bina "friend" keyword ke
void f1(complex c)
{
    //  cout<<a+b;
    //  cout<<c1.a+c1.b;......// aise bhi nhi likh skte kyunki c1 bana toh main function mein h
    // piche jaise likkh paane ke liye c1 k pass krna padega
    cout << c.a + c.b << endl;
}

// ✅ + operator overload for int + complex
complex operator+(int k, complex c)
{
    complex temp;
    // member nhi h toh a directly nhi likkh skte
    temp.a = k + c.a;
    temp.b = c.b;
    return temp;
}

// ❌ GALTI: tumne `item temp;` likha tha, jabki `item` koi class nahi hai.
// ✅ Use correct class name `complex`
complex operator-(complex c)
{
    complex temp;
    temp.a = -c.a;        // ❌ -a likhne se confusion hoti, c.a use karo
    temp.b = -c.b;
    return temp;
}

int main() // ye non member function h
{
    complex c1, c2, c3, c4;
    c1.setData(3, 7);
    c2.setData(5, 6); // iss baar a,b c2 object/instance ke h

    c3 = 5 + c1;
    // c3 = 5 + c1;    // error kyunki left side mein caller object hona chahiye 
    // isko as a member nhi define kr skte 

    // c1.f1(); .....aise call member ko krte h par f1 toh member h nhi toh aise nhi kareneg
    // f1(); //...... non member function ko aise call krte h....par isse member function ko access bhi krna h
    f1(c1);   // ... c1 ko access karane ke liye aise likhna padega 

    c4 = -c1;   //  c1.operator-();.....jo ye return karega c4 mein assign karega

    return 0;
}
