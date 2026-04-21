#include <iostream>
#include <cstring>  // For strcpy
using namespace std;

// Class definition for person
class person {
    char name[30];   // Character array to store name
    float age;       // Float to store age

public:
    // Parameterized constructor to initialize name and age
    person(char* s, float a) {
        strcpy(name, s); // Copy the passed name into the member variable
        age = a;         // Assign the age
    }

    // Member function to compare age with another person object
    person greater(person n) {
        if (n.age >= age)
            return n;     // If other person is elder or same age, return them
        else
            return *this; // Otherwise, return the current object
    }

    // Function to display person details
    void display(void) {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating 3 person objects with name and age
    person p1("John", 37), p2("Feb", 29), p3("Ram", 40);

    // Compare p1 and p3 and store the elder one in p
    person p = p1.greater(p3);
    cout << "Elder is: " << endl;
    p.display();  // Display details of elder person

    // Compare p1 and p2 and store the elder one in p
    p = p1.greater(p2);
    cout << "Elder is: " << endl;
    p.display();  // Display details of elder person

    return 0;
}
