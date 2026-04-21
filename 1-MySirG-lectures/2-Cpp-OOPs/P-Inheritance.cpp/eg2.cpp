#include <iostream>
using namespace std;

class B
{
    int a; // Private member
public:
    int b;        // Public member

    void get_ab() // To input values
    {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }
    int get_a() // To return 'a'
    {
        return a;
    }
    void show_a() // To display 'a'
    {
        cout << "a = " << a << endl;
    }
};

// Class D inherits privately from B
class D : private B
{
    int c;

public:
    void mul() // To multiply b * a and store in c
    {
        get_ab();        // Allowed: D can access B's public methods
        c = b * get_a(); // Using inherited members
    }
    
    void display() // To display a, b, and c
    {
        show_a(); // Show value of a using base class function
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

// ---------- Main function ----------

int main()
{
    D d;

    d.mul();     // Calls inherited functions from B to get a and b, and multiplies
    d.display(); // Displays a, b, and c

    // The below line is valid only inside class D. Outside, get_ab is private due to private inheritance.
    // d.get_ab();   // ❌ Won’t work
    // d.show_a();   // ❌ Won’t work
    // d.b = 20;     // ❌ Won’t work (b becomes private in D)

    d.mul();     // You can still call mul again
    d.display(); // Displays new values

    return 0;
}
