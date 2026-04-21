#include<iostream>
using namespace std;
int main()
{  int a,b,i,prod,n;
cout<<"Enter the number"<<endl;
cin>>n;
  
   for(i=2;i<n;i++)
   {
    if(n%i==0)
    {
      break;
      
    }
     }
     if(i==n)
     cout<<"It is a prime number"<<endl;
     else
     cout<<"It is not a prime number"<<endl;
      
   
   return 0;
 
}