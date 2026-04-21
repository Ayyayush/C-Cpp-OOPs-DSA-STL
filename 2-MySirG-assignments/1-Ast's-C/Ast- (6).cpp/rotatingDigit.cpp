#include <iostream>
using namespace std;
int main()
{
   int n,rem=0;
   cin>>n;
   while(n>99 && n<1000)
   {
    rem=n%10;
    n=n/10;
    cout<<rem<<n<<endl;
   }
   return 0;
}