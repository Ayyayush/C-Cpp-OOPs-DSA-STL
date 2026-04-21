#include<iostream>
using namespace std;
int main()
{  int a,b,i,prod,l;
cout<<"Enter the numbers"<<endl;
cin>>a>>b;
  
   for(i=a>b?a:b;i<=a*b;i++) 
   {
    if(i%a==0 && i%b==0)
    {
       l=i;
      
    }
     }
      
   cout<<"The lcm of the two numbers is "<<l<<endl;
   return 0;
 
}