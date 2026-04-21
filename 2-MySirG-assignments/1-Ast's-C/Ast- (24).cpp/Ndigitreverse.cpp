#include <iostream>
using namespace std;
void digrev(int );


int main()
{
 int m;
 cout<<"Enter the input"<<endl;
 cin>>m;
 digrev(m);
 return 0;
}

void digrev(int n)
{ 
    
     if(n>0)
     {
      
      
        cout<<n%10;
         digrev(n/10);
          
     }
     
}