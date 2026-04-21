#include <iostream>
using namespace std;
 int hcf(int,int);
  int hcf(int n, int m)
  {
    int fact,L,S,i;
    
    S=n>m?m:n;
   
    for(i=S;i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
             fact==i; 
            break;
            
        }

    }
  
    return fact;
  }

int main()
{
int a,b,factor;

cout<<"Enter the numbers for Hcf"<<endl;
cin>>a>>b;
factor=hcf(a,b);
cout<<"HCF is "<<factor<<endl;
return 0;

}