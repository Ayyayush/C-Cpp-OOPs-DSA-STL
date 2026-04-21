#include <iostream>
using namespace std;
int main()
{
    int n,rem=0,prod=0;
    cin>>n;
    rem=n/2;
    prod=rem*2;
    if(prod==n)
    {
        cout<<"even"<<endl;
        
    }
    else{
        cout<<"odd"<<endl;
    }
   return 0; 
}