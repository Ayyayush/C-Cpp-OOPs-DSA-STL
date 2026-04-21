#include <iostream>
#include <string>
using namespace std;

class Student {
    int stu_id;
    string name;
    string email;

public:
    // Non-argument constructor
    Student() {
        name = "";                              // Empty string assign kiya
        email = "";                             // Same here
        stu_id = 0;                             // ID ko bhi default initialize kiya
        cout << "Student instance variables have been initialised" << endl;
    }

    // Function to take input
    void SetData() {
        cout << "\nEnter the details of the student:" << endl;
        cout << "ID: ";
        cin >> stu_id;
        cin.ignore();                           // getline se pehle ignore karna padta hai
        cout << "Name: ";
        getline(cin, name);
        cout << "Email: ";
        getline(cin, email);
    }

    // Function to display data
    void DisplayData() {
        cout << "\nStudent Details:" << endl;
        cout << "ID: " << stu_id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {
    Student s1, s2;               // s2() nahi, sirf s2 likhna hai (object declaration)
    s1.SetData();                 // Input le rahe object ke liye
    s1.DisplayData();            // Output dikhana
    return 0;
}
