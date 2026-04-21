#include <iostream>
using namespace std;
int Nsum(int );
int main()
{
int a,no;
cout<<"Enter the input"<<endl;
cin>>a;
no=Nsum(a);
cout<<no;
return 0;
}

int Nsum(int n)
{ 
    
    
    if(n==1)
       return 1;
       return 2*n-1+Nsum(n-1);
       
   
   
   
   

}