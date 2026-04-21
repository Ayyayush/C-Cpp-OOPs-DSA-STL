#include <iostream>
using namespace std;
int main()
{
    int n,dig=0,i,j;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for( i=2;i<=n;i++)
    {
        if(n%i==0)
        { 
            dig==i;
            break;
        }
    }
    for( j=2;j<dig;j++)
    {
        if(n%j==0)
        {
            break;
        }
    }
    if(j==n)
    cout<<"The prime factor is"<<j<<endl;
    return 0;
}