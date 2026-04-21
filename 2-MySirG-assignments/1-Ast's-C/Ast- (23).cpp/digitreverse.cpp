#include <iostream>
using namespace std;
void reverse(int n)
{
    int rem=0,rev=0;
    if(n>0)
    {
        rem=n*10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reverse of digit is "<<rev<<endl;

reverse(n-1);
}


int main()
{
    int m;
    cin>>m;
reverse(m);
return 0;
}