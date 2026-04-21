#include <iostream>
using namespace std;
int main()
{
    int a,rem=0,sum=0,cube=0;
    cin>>a;
    int p=a;
    while(a)
    {
    rem=a%10;
    cube=rem*rem*rem;
    sum=sum+cube;
    a/=10;
    }
    if(sum==p)
    {
    cout<<"Armstrong Number"<<endl;
    }
    else {
        cout<<"Not Armstrong number"<<endl;
    }

    return 0;

}