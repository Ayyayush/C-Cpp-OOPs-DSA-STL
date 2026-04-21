#include <iostream>
using namespace std;
void decimaltobinary(int );


int main()
{
 int m;
 cout<<"Enter the input"<<endl;
 cin>>m;
 decimaltobinary(m);
 return 0;
}
 void decimaltobinary(int n)
 {
    if(n>=1)
    {
     decimaltobinary(n/2);
    cout<<n%2;
 }
    
 }