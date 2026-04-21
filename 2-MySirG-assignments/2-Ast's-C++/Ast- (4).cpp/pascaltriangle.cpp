#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int factorial(int);
int combination(int ,int );
void pascal(int);

 int fact(int n)
 {
    int f=1,i;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
   return f;
 }


  int combination(int n,int r )
  {
 return (fact(n)/fact(n-r)/fact(r));
  }


   void pascal(int line)
   {
    int i,j,k,r;
    for(i=1;i<=line;i++)
    { 
        k=1;
        r=0;

         for(j=1;j<= (2*line-1);j++)
        {
            if(j>=6-i && j<=4+i && k) 
            {
                cout<<combination(i-1,r);
                k=0;
                r++;
            }
            else
            {
                cout<<"    ";
                k=1;
            }
        }
        cout<<endl;
    }
   }

int main()
{
     int l;
     cout<<"Enter the line "<<endl;
cin>>l;

pascal(l);
return 0;
}