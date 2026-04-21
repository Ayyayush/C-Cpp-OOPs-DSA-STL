#include <iostream>
using namespace std;
void oddeven(int );

int main()
{
  int m;
  cout<<"Enter the number of terms"<<endl;
  cin>>m;
    oddeven(m);
    return 0;
}

void oddeven(int n)
{
   int i;
   
    for(i=1;i<=n;i++)
    
      {  
        if(i%2!=0)
        
        {
            cout<<i<<" Odd "<<endl;
        
      }
}
}
