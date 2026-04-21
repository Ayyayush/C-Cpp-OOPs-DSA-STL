// 🔷 this keyword in C++
// 🔸 Definition (Hinglish mein):
// this ek pointer hota hai jo current object ko point karta hai. Har member function ke andar by default this pointer hota hai jo us object ko refer karta hai jisne us function ko call kiya.

// 🔸 Jab use hota hai:
// Jab function argument ka naam aur class member ka naam same hota hai.

// Jab current object ko return karna hota hai (method chaining ke liye).

// Jab pointer dereferencing ki zarurat padti hai.

// Jab hum *this se current object ka copy bhejna chahte hain.


//THIS is a local object pointer in every instance member function 
// which contains address of the current object 
 this cannot be modified ...you cannot channge the value in this pointer




🔶 Example 1: Parameter name same as data member
#include <iostream>
using namespace std;

class Box {
    int length;

public:
    void setLength(int length) {
        this->length = length;   // 'this->length' means class member, 'length' means parameter
    }

    void display() {
        cout << "Length = " << length << endl;
    }
};

int main() {
    Box b;
    b.setLength(10);    // this points to b
    b.display();
    return 0;
}


🔶 Example 2: Returning current object (method chaining)

class Box 
{
    int l, b;

public:
    Box& setL(int l) {
        this->l = l;
        return *this;
    }

    Box& setB(int b) {
        this->b = b;
        return *this;
    }

    void show() {
        cout << "Length: " << l << ", Breadth: " << b << endl;
    }
};

int main() {
    Box obj;
    obj.setL(5).setB(10);   // method chaining using 'this'
    obj.show();
    return 0;
}




🔶 Example 3: Pointer ke through object banana

class Demo {
    int x;
public:
    void set(int x) {
        this->x = x;
    }

    void print() {
        cout << "x = " << this->x << endl;
    }
};

int main() {
    Demo d1;
    Demo* ptr = &d1;
    ptr->set(100); 
    ptr->print();
    return 0;
}




// 🔸 Important Notes:
// Use Case	Meaning
// this->x	Current object ka data member x
// *this	Current object ka reference
// return *this	Method chaining ke liye useful

// 🔚 Summary:
// this ek implicit pointer hota hai jo current object ko point karta hai.

 ' Mostly use hota hai::
// Jab parameter name aur data member same ho.

// Method chaining mein.

// Current object return karne mein.