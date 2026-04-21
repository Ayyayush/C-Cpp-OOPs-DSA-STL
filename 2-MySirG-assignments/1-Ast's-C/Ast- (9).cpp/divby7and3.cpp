#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%7==0 && n%3==0 )
    {
        cout<<"No is divisible"<<endl;
    }
    else
    {
        cout<<"No is not divisible"<<endl;
    }
    return 0;
}