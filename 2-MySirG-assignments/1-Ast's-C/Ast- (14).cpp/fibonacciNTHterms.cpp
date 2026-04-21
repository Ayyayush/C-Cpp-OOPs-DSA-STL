#include <iostream>
using namespace std;
int main()
{
     int a, b, n, c;
    cout << "Enter the term you want to print" << endl;
    cin >> n;
    for (a = -1, b = 1; n; n--)
    {
        c = a + b;
       // cout << c << " "; print nhi karenge abhi
        a = b;
        b = c;
      //  c = a + b;
    }
    //last term print hoga
    cout << c << " ";

return 0;
}