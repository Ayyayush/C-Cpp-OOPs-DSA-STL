#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"equal " << a<<endl;
    }
    else if(a>b)
    {
        cout<<"greater no is "<<a<<endl;
    }
     else if(b>a)
    {
        cout<<"greater no is "<<b<<endl;
    }
    return 0;
}
