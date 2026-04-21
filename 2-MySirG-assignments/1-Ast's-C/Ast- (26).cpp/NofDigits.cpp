#include <iostream>
using namespace std;

int  cd(int n)
{ 
    if(n==0)
   return 0;
   return cd(n/10)+1;
}


 int main()
 {
    int a,cdigit;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cdigit=cd(a);
    cout<<cdigit;
    return 0;
 }