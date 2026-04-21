#include <iostream>
using namespace std;
int Nprime(int n)
{
    int c=0,j,i;
    cout<<"Printing n prime numbers"<<endl;
    for(j=2;j<=n;j++)
    {
    for(i=2;i<j;i++)
    {
        if(j%i==0)
        {
         break;
        }
    }
    if(j==i)
    {
        cout<<"Prime no "<<j<<endl;
        
    }
 
    }
    return c;

}
 int main()
 {
    int a,Nprimenum;
     cout<<"Enter the number"<<endl;
      cin>>a;
     Nprimenum=Nprime(a);
        return 0;
 }