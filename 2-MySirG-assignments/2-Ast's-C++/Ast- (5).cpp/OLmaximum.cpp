#include <iostream>
using namespace std;
 int max(int a,int b)
 {
   if(a>b)
   return a;
    else
   return b;

 }
 float max(float a,float b)
 {
    if(a>b)
    return a;
    else
    return b;
 }
int main()
{
    float p,q,maximum;
    cout<<"Enter the inputs"<<endl;
    cin>>p>>q;
   maximum=max(p,q);
   cout<<"The maximum number is "<<maximum<<endl;
   return 0;
}