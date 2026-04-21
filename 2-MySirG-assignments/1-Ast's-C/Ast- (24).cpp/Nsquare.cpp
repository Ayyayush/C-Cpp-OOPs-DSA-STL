#include <iostream>
using namespace std;
int N1(int );
void N2();

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
    int i,squ;
     if(n>0)
     {
         N1(n-1);
     squ=n*n;
     cout<<"square is "<<squ<<endl;
     }
    
     
}
