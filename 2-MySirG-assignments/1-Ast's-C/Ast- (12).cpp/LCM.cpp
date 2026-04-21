#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j ,L,a,b;
    cin>>a>>b;

        for(L=a>b?a:b;L<=a*b;L++)
        {
        if(L%a==0 && L%b==0)
        {
           break; }
        }
         cout<<"LCM is "<<L<<endl;
    
  
    return 0;
}