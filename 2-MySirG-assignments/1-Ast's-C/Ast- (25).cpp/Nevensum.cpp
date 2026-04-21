#include <iostream>
using namespace std;
int Nsum(int );
int main()
{
int a,ns;
cout<<"Enter the input"<<endl;
cin>>a;
ns=Nsum(a);
cout<<ns;
return 0;
}

int Nsum(int n)
{ 
     if(n==1)
       return 2;
       return n+Nsum(n-1);
       
   
   

}