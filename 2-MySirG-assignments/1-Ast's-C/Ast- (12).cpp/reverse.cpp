#include <iostream>
using  namespace std;
int main()
{
    int n,rem=0,sum=0;
    cin>>n;
  while(n)
    {
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;
     
    }
    cout<<sum<<endl;
   
      return 0;

}