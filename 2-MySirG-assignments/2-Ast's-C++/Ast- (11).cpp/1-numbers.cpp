#include <iostream>
#include <string>
using namespace std;

class Numbers {
    int a;
    char b;
    float c;
    double d;
    string e;
    int F[4];
    int size;
    int *arr;

public:
    // Default constructor
    Numbers() {
        cout << "Initialising the member variables..." << endl;
        cout << "Enter int, char, float, double:" << endl;
        cin >> a >> b >> c >> d;

        e = "ayush";
        F[0] = 0;
        size = 5;
        arr = new int[size];          // dynamic memory allocate

        for (int i = 0; i < size; i++) {
            arr[i] = i * 10;
        }

        cout << "The member variables have been initialised.\n" << endl;
    }

    // ✅ Deep Copy Constructor
    Numbers(const Numbers &other) {
        a = other.a;
        b = other.b;
        c = other.c;
        d = other.d;
        e = other.e;

        for (int i = 0; i < 4; i++) {
            F[i] = other.F[i];        // static array copy
        }

        size = other.size;
        arr = new int[size];          // naye memory ke liye allocate
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];    // value bhi copy karo
        }

        cout << "✅ Deep copy constructor called.\n";
    }

    // Display function
    void showNumber() {
        cout << "\nDisplaying the initialised values:\n";
        cout << "Integer: " << a << endl;
        cout << "Character: " << b << endl;
        cout << "Float: " << c << endl;
        cout << "Double: " << d << endl;
        cout << "String: " << e << endl;
        cout << "Static array value (F[0]): " << F[0] << endl;
        cout << "Dynamic array values: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Numbers() {
        delete[] arr;                // dynamically allocated memory free
        cout << "\n❌ The dynamic memory has been deallocated." << endl;
        cout << "The program is ending...\n" << endl;
    }
};

int main() {
    Numbers n1;                      // constructor call
    n1.showNumber();                 // show values

    Numbers n2 = n1;                 // deep copy constructor call hoga
    n2.showNumber();                 // same values, but separate memory

    return 0;
}
