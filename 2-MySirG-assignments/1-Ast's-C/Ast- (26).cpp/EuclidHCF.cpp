#include <iostream>
using namespace std;
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        return b;
        else
        return hcf(a%b, b);
    }
    else
    {
        if(b%a==0)
        
        return a;
        else
        return hcf(a,b%a);
    }
}

int main()
{
    int p,q,hfactor;
    cout<<"Enter the numbers"<<endl;
    cin>>p>>q;
    hfactor=hcf(p,q);
    cout<<hfactor<<endl;
}