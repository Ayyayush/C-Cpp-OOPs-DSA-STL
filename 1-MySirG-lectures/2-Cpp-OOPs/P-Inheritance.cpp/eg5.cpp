#include <iostream>
using namespace std;

// Base class A (acts like 'Grandparent')
class A {
public:
    void show() {
        cout << "This is class A (common base class)\n";
    }
};

// Class B1 inherits A virtually
class B1 : virtual public A {
    // Members specific to B1 can go here
};

// Class B2 also inherits A virtually
class B2 : public virtual A {
    // Members specific to B2 can go here
};

// Class C inherits from both B1 and B2
class C : public B1, public B2 {
    // Only one copy of class A will be inherited
    // due to virtual inheritance
};

int main() {
    C obj;

    // Only one call to A::show() is needed; no ambiguity
    obj.show(); // Works perfectly due to virtual base class

    return 0;
}
