#include <iostream>
using namespace std;
void natural(int );


void natural(int n)
{
  int i;
    for(i=1;i<=n;i++)
    
      {  cout<<"The first n natural numbers are "<<endl<<i<<endl;
      }
      
}

int main()
{
  int m=5; // local variable
  cin>>m;
     natural(m);
    return 0;
}