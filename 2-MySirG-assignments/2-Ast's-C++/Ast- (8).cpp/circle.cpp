#include <iostream>
using namespace std;

class Circle
{
    int radius;          // Circle ka radius store karne ke liye
    double pi = 3.14;    // Circle ka constant value (π)

    public :

    // Function to set radius
    void Setradius()
    {
        cout << "Enter the radius of the circle: " << endl;
        cin >> radius;
    }
     
    // Function to calculate and display area of the circle
    void area()
    {
        double area = pi * radius * radius;   // Area = π * r^2
        cout << "The area of the circle is: " << area << endl; // Display the area value
    }

    // Function to calculate and display circumference of the circle
    void circum()
    {
        double circumference = 2 * pi * radius;   // Circumference = 2 * π * r
        cout << "The circumference of the circle is: " << circumference << endl; // Display circumference value
    }

};  // Class definition ke baad semicolon lagana zaroori hai

int main()
{
    Circle c;       // Circle ka object create kiya
    c.Setradius();  // Radius input karne ke liye function call
    c.area();       // Area calculate aur display karne ke liye function call
    c.circum();     // Circumference calculate aur display karne ke liye function call
    
    return 0;
}
