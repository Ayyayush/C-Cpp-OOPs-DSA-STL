#include <iostream>
using namespace std;

int fiboM1()
{
    int a = -1, b = 1, n, i, c = 0;
    cout << "No of terms you want to print" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
       // cout << c << " ";
        a = b;
        b = c;
       // c = a + b;
        cout << c << " ";
    }
   // cout << c << " ";
    cout<<endl;
}

int fiboM2()
{
    int a, b, n, c;
    cout << "Enter terms to print" << endl;
    cin >> n;
    for (a = -1, b = 1; n; n--)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << c << " ";
}

int main()
{
    fiboM1();
    fiboM2();
    return 0;
}
