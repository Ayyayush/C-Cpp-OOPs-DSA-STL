#include <iostream>
using namespace std;

 int pc(int,int);

  int pc(int n,int r)
  {
     int i,fact1=1,fact2=1,fact3=1,p_c;
   int diff=n-r;
   
    for(i=n;i>=1;i--)
    {
        fact1=fact1*i;
    }
  
   for(i=r;i>=1;i--)
    {
        fact2=fact2*i;
    }
  
   for(i=diff;i>=1;i--)
    {
        fact3=fact3*i;
    }
   p_c=fact1/(fact2*fact3);
   return p_c;

  }


int main()
{
 int a,b,ncr;
  cout<<"Total numbers avaialble is n"<<endl;
    cout<<"The number of items to choose is r"<<endl;
    cout<<"Enter the Numbers"<<endl;
   cin>>a>>b;
   ncr=pc(a,b);
   cout<<ncr<<endl;
 return 0;
}