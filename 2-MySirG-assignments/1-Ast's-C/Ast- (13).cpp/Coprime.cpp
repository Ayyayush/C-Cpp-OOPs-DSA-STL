#include <iostream>
using namespace std;
int main()
{
    int H, a,b,factor=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    H=a>b?a:b;
    for(int i=1;i<=H;i++)
    {
        if(a%i==0 && b%i==0)
        {
            factor =i;
        }
      
    }
    if(factor==1)
    {
        cout<<"Coprime Number"<<endl;
    }
     
    return 0;

}