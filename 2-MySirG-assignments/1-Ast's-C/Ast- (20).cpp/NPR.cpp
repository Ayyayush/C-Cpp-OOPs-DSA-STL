#include <iostream>
using namespace std;

 int pc(int,int);

  int pc(int n,int r)
  {
     int i,fact1=1,fact2=1,p_c;
   int diff=n-r;
   
    for(i=n;i>=1;i--)
    {
        fact1=fact1*i;
    }
  
  
   for(i=diff;i>=1;i--)
    {
        fact2=fact2*i;
    }
   p_c=fact1/fact2;
   return p_c;

  }


int main()
{
 int a,b,npr;
  cout<<"Total numbers available is n"<<endl;
    cout<<"The number of items to choose  for arrangement is r"<<endl;
    cout<<"Enter the Numbers"<<endl;
   cin>>a>>b;
   npr=pc(a,b);
   cout<<npr<<endl;
 return 0;
}