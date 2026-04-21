#include <iostream>
using namespace std;
template <typename T>     // typename ki jageh pe class bhi use kr skte hai 

T greater(T a, T b)              // takiing arguements  of the same type 
{
    if(a>b)
    {
        cout<<a<<" ";
    }
    else{
        cout<<b<<" ";
    }
return 0;
}

int main()
{
   int a,b;
   cin>>a>>b;
   greater(a,b);
   return 0;
}