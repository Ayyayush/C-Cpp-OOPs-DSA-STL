#include <iostream>
using namespace std;
int lcm(int a,int b)
{
    int L;
    for(L=a>b?b:a;L<=a*b;L++)
    if(L%a==0 && L%b==0)
    return L;
    return 1;//ye kbhi nhi chalega
}
int Hcf(int a,int b)
{
    int i;
    for(i=a*b;i>=1;i--)
    
        if(a%i==0 && b%i==0)
    return i;
    return 1;//ye kbhi nhi chalega
}
 int isprime(int n)
 {
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    return 0;
    return 1;//ye kbhi nhi chalega
 }
 int nextprime(int n)
 {
    while(!isprime(++n));
    return n;
     }

     void Nprime(int n)
     { int i,x;
     for(i=1,x=2;i<=n;i++)
     {
        if(isprime(x))
        cout<<n<<endl;
        x=nextprime(x);
     }

    }

int main()
{
Nprime(10);
cout<<endl;
return 0;
}