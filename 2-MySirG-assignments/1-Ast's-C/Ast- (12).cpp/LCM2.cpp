#include <iostream>
using namespace std;
int main()
{
    int a,b,i,L,prod=1;
    cin>>a>>b;
    L=a>b?a:b;
    for(i=2;i<=L;i++)
    {
        if(a%i==0 || b%i==0)
        {
             
           break;

         
        }
        prod=prod*i;
    }
      
    cout<<"Lcm is "<<prod<<endl;
    return 0;
}