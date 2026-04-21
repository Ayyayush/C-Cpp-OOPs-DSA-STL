#include <iostream>
using namespace std;
void Nsum(int );
int main()
{
int a;
cin>>a;
Nsum(a);
return 0;
}

void Nsum(int n)
{ 
     int i,sum=0; 
    if(n>0)
    {
   
        sum=sum+n;
    
     cout<<"Sum is "<<sum<<endl;
    
    }
   
    Nsum(n-1);

}