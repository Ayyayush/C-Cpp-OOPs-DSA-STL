#include <iostream>
using namespace std;
int main()
{
    int a,i,rem=0,sum=0,cube=0;
   
    int p=i;
    for(i=1;i<=1000;i++){
    while(a)
    {
    rem=a%10;
    cube=rem*rem*rem;
    sum=sum+cube;
    a/=10;
    }
    }
    if(sum==p)
    {
    cout<<"Armstrong Number "<<i<<endl;
    
    }
    return 0;

}