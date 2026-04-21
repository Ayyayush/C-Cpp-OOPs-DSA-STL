#include <iostream>
using namespace std;
 int digitsum(int);
int main()
{
 int a,sod;
 cout<<"Enter the number"<<endl;
 cin>>a;
 sod=digitsum(a);
 cout<<sod;
 return 0;
}

 int digitsum(int n)
 {
    if(n==0)
    return 0;
       
       
        return  digitsum(n/10)+n%10;
        
    }
  
 