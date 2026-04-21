#include <iostream>
using namespace std;
int main()
{
    int n,d=0,rem=0;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        d++;
        n=n/10;
    }
    if(d==3)
    {
        cout<<"Three digit number"<<endl;
    }
    else{
        cout<<"Not a Three digit number"<<endl;
    }
    return 0;
}