#include <iostream>
using namespace std;
int main()
{
   int n,rem1=0,rem2=0,rem3=0,sum=0;
   cin>>n;
   while(n>99 && n<1000)
   {
   rem1=n%10;
   n=n/10;
   rem2=n%10;
   n=n/10;
   rem3=n%10;
   sum=sum+rem1+rem2+rem3;
   
   
  
   cout<<sum<<endl;
  }
  
   return 0;


}