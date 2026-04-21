#include <iostream>
using namespace std;
void Nprint(int );
void N2();

int main()
{
 int m;
 cout<<"Enter the input"<<endl;
 cin>>m;
 Nprint(m);
 return 0;
}

void Nprint(int n)
{ 
    
     if(n>0)
     {
       
        Nprint(n-1);
        cout<<n<<endl;
     }
     
}