#include <iostream>
using namespace std;
int fac(int);
int fac(int n)
{ 
     int fact=1,i;
    
    for(i=n;i>=1;i--) 
    {
        fact =fact*i;
    }
     return fact;
   }


int main()
{
    int a,factorial;
    cout<<"Enter the number"<<endl;
    cin>>a;
     factorial=fac(a);
     cout<<factorial<<endl;
    return 0;
}