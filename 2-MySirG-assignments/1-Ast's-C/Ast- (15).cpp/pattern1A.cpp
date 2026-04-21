#include <iostream>
using namespace std;

int p1()
{
     int i,j,n;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
   
}

int p2()
{
     int i,j,n;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=6-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}

int p3()
{
     int i,j,n;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=6-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}

int p4()
{
     int i,j,n;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i && j<=n)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}
int p5()
{
     int i,j,n;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            cout<<j;
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}


 int main()
 {
    p1();
    p2();
    p3();
   p4();
    p5();
 return 0;
   }
