#include <iostream>
using namespace std;
template <typename T>     // typename ki jageh pe class bhi use kr skte hai 

T smaller (T a, T b)              // takiing arguements  of the same type 
{
    if(a>b)
    return b;
    else
    return a;
}

int main()
{
   float a,b,result;
   cin>>a>>b;
   result=smaller(a,b);
   cout<<result<<endl;
   return 0;
}