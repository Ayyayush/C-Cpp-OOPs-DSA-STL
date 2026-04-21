#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch>='A' && ch<='Z')
    {
        cout << "is in Uppercase" << endl;
    }
    else if (ch>'a' && ch<='z')
    {
        cout << "is in Lowercase" << endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout << "Special Character" << endl;
    }
    else
    {
        cout<<"Invalid character"<<endl;
    }

    return 0;
}