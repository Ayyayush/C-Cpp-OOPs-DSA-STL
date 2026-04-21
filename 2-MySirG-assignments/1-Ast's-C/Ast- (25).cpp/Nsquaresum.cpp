#include <iostream>
using namespace std;

int squaresum(int);

int main()
{
 int m,sn;
 cout<<"Enter the input"<<endl;
 cin>>m;
 sn=squaresum(m);
 cout<<sn;
 return 0;
}

int squaresum(int n)
{ 
if(n==1)
return 1;
return n*n+squaresum(n-1);
}