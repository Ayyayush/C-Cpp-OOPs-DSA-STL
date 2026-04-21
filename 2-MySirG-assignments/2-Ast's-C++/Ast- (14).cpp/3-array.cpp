#include <iostream>
using namespace std;

class Array {
private:
    int *p;
    int size;

public:
    // Default constructor
    Array() {
        size = 0;
        p = NULL;
    }

    // Parameterized constructor
    Array(int s) {
        size = s;
        p = new int[size];
    }

    // Copy constructor for deep copy
    Array(const Array &arr) {
        size = arr.size;
        p = new int[size];
        for (int i = 0; i < size; i++)
            p[i] = arr.p[i];
    }

    // Assignment operator overloading
    Array operator=(const Array &arr) {
        // delete old memory if any
        if (p != NULL)
            delete[] p;

        size = arr.size;
        p = new int[size];
        for (int i = 0; i < size; i++)
            p[i] = arr.p[i];

        return *this;
    }

    // For setting array values
    void setData() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++)
            cin >> p[i];
    }

    // For displaying array values
    void showData() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
            cout << p[i] << " ";
        cout << endl;
    }

    // Granting friend access to operator+
    friend Array operator+(Array, Array);

    // Destructor to free memory
    ~Array() {
        if (p != NULL)
            delete[] p;
    }
};

// Operator+ for concatenation
Array operator+(Array a1, Array a2) {
    Array temp(a1.size + a2.size);      // combined size

    // Copying first array elements
    for (int i = 0; i < a1.size; i++)
        temp.p[i] = a1.p[i];

    // Copying second array elements
    for (int i = 0; i < a2.size; i++)
        temp.p[a1.size + i] = a2.p[i];

    return temp;   // returning deep copy object
}

int main() {
    Array a1(3), a2(2);

    a1.setData();       // User input for a1
    a2.setData();       // User input for a2

    Array a3 = a1 + a2; // operator+ call hoga

    cout << "First array: ";
    a1.showData();

    cout << "Second array: ";
    a2.showData();

    cout << "Concatenated array: ";
    a3.showData();

    return 0;
}
