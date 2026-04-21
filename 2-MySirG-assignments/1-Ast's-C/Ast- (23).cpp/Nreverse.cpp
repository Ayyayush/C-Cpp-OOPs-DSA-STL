#include <iostream>
using namespace std;
int N1(int );

int main()
{
 int m;
 cout<<"Enter the input"<<endl;
 cin>>m;
 N1(m);
 return 0;
}

int N1(int n)
{ 
    int i;
     if(n>0)
     { for(i=n;i>=1;i--)
     {
       cout<<i<<endl;
     }
      N1(n-1);
       } 
     
     
}