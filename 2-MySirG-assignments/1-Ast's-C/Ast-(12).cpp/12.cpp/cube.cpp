#include <iostream>
using namespace std;
int main()
{
    int n,cube;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cube=i*i*i;
        cout<<cube<<endl;
    }
    return 0;
}