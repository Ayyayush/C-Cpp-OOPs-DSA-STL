#include <iostream>
using namespace std;

class Array 
{
private: 
    int *p;                      // Pointer jo dynamic array ka base address store karega
    int size;                    // Array ka size store hoga

public:
    Array(int s)                // Constructor with size parameter
    {
        size = s;
        p = new int[size];      // Dynamic array create kiya heap memory mein
    }

    int& operator[](int index)  // Overloading [] operator to access elements like array
    {
        if(index >= 0 && index < size)
            return p[index];    // Agar valid index hai toh uska reference return karo

        cout << "Invalid array index" << endl;   // Agar galat index diya
        return p[0];            // Safe fallback: pehla element return kar diya
    }

    ~Array()                    // Destructor to free memory
    {
        delete []p;            // Heap memory free kar di
    }
};

int main()
{
    Array a(3);        // 3 element ka array banaya
    a[0] = 5;
    a[1] = 10;
    a[2] = 15;

    cout << "Element at index 1: " << a[1] << endl;    // Output: 10
    cout << "Element at index 2: " << a[2] << endl;    // Output: 15

    a[5] = 100;      // Invalid index example

    return 0;
}
