#include <iostream>
using namespace std;

class Volume
{
    int l;     // Length of cuboid
    int b;     // Breadth of cuboid
    int h;     // Height of cuboid

public:
    // Default Constructor - values initialize kar raha hai
    Volume()
    {
        l = 0;
        b = 0;
        h = 0;
        cout << "Instance variables initialized to 0" << endl;
        cout << "Length: " << l << endl;
        cout << "Breadth: " << b << endl;
        cout << "Height: " << h << endl;
    }

    // SetData() function to assign values to dimensions
    void SetData(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }

    // Calc() function to calculate and print volume of cuboid
    void Calc()
    {
        int vol = l * b * h;      // Volume = l × b × h
        cout << "Volume of Cuboid = " << vol << " cubic units" << endl;
    }
};

int main()
{
    Volume v;                    // Constructor call hote hi l, b, h initialize honge
    v.SetData(5, 6, 8);          // Dimensions set kar rahe hain: l=5, b=6, h=8
    v.Calc();                    // Volume calculate and print

    return 0;
}
