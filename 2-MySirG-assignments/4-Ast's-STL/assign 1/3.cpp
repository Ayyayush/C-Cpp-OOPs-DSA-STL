#include <iostream>
using namespace std;
template <typename P>
P print(P A[],P a)
{
    
    for(int i=0;i<a;i++)
    cout<<A[i]<<" ";
}
int main()
{
 int x;
 cin>>x;
 int Array[x];
    for(int i=0;i<x;i++)
    cin>>Array[i];
 
 print( Array, x);
 return 0;
}