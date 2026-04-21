#include <iostream>
using namespace std;
int prime(int n)
{
    int c=0,i;
    int n=num;
  
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
         break;
        }
    }
    if(i==num)
    {
        c++;
    }
    return c;
}

 int main()
 {
    int a,primeornot;
     cout<<"Enter the number"<<endl;
     primeornot=prime(a);
     if(c==1)
     {
        cout<<"Prime"<<endl;
     }
     if(c==0)
     {
        cout<<"Not Prime"<<endl;
     }
     return 0;
 }