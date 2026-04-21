#include <iostream>
using namespace std;

// Structure to store student marks and details
struct marks {
    int math_Marks, chem_Marks, phy_Marks, roll_no;
    float percentage;
};

// Function to take input from the user
struct marks input() {
    struct marks s;  // Corrected structure name

    cout << "Enter the Chemistry, Math, Physics marks and Roll Number of the student: " << endl;
    cin >> s.chem_Marks >> s.math_Marks >> s.phy_Marks >> s.roll_no;

    // Calculating the percentage
    s.percentage = (s.chem_Marks + s.math_Marks + s.phy_Marks) / 3.0;  // Average marks

    return s;  // Returning the structure
}

int main() {
    struct marks student1;  // Creating a structure variable

    student1 = input();  // Calling the function to get input

    // Displaying student details
    cout << "\nStudent Details: " << endl;
    cout << "Roll Number: " << student1.roll_no << endl;
    cout << "Math Marks: " << student1.math_Marks << endl;
    cout << "Chemistry Marks: " << student1.chem_Marks << endl;
    cout << "Physics Marks: " << student1.phy_Marks << endl;
    cout << "Percentage: " << student1.percentage << "%" << endl;

    return 0;
}
