#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the case" << endl;
    cin >> n;

    cout << "Enter the sides" << endl;

    int a, b, c;
    cin >> a >> b >> c;

    int x, y, z;

    switch(n)
    {
        case 1:

            cout << "Isoceles Triangle case" << endl;

            if(a == b || b == c || a == c)
            {
                cout << "Yes a Isoceles Triangle" << endl;
            }
            else
            {
                cout << "Not a Isoceles Triangle" << endl;
            }

            break;

        case 2:

            cout << "Right Angled Triangle case" << endl;

            x = a * a;
            y = b * b;
            z = c * c;

            if(x + y == z || y + z == x || x + z == y)
            {
                cout << "Yes a Right Angled Triangle" << endl;
            }
            else
            {
                cout << "Not a Valid Right Angled Triangle" << endl;
            }

            break;

        case 3:

            cout << "Equilateral Triangle case" << endl;

            if(a == b && b == c)
            {
                cout << "Equilateral Triangle" << endl;
            }
            else
            {
                cout << "Not an Equilateral Triangle" << endl;
            }

            break;

        case 4:

            cout << "Exit" << endl;

            break;

        default:

            cout << "Not a valid case" << endl;
    }

    cout << "Yupp" << endl;

    return 0;
}