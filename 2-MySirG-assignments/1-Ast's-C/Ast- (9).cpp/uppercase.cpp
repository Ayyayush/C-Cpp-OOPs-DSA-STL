#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch>=65 && ch<=90)
    {
        cout << "is in Uppercase" << endl;
    }
    else if (ch>96 && ch<=122)
    {
        cout << "is in Lowercase" << endl;
    }
    else
    {
        cout << "not valid Character" << endl;
    }

    return 0;
}