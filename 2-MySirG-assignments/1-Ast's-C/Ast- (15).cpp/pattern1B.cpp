#include <iostream>
using namespace std;

int p6()
{
     int i,j,n;
     
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)            
            cout<<i-j+1;
            else
            cout<<" ";
        }
        cout<<endl;
    }
  cout<<endl; 
}


int p7()
{
     int i,j,n;
     char k;
     cin>>n;
    
    for(i=1;i<=n;i++)
    {k='A';
        for(j=1;j<=n;j++)
        {
            if(j>=i){
                cout<<k++;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
   cout<<endl;
}


int p8()
{
   
     int i,j,n;
     int k=1;
      
      cin>>n;
    
    for(i=1;i<=n;i++)
    {
       

        for(j=1;j<=n;j++)
        {
            if(j<=i)            
            cout<<k++;
            else
            cout<<" ";
        }
        cout<<endl;
    }
   cout<<endl;
 
}


int p9()
{
   
     int i,j,n;
     char k;
      k='A';
      cin>>n;
    
    for(i=1;i<=n;i++)
    {
     k='A'+i-1;  

        for(j=1;j<=n;j++)
        {
            if(j>=i)            
            cout<<k++;
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
cout<<endl; 
}

int p10()
{
   int i,j,n;
     int k=1;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)            
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
  cout<<endl; 
  
}


 int main()
 {
    p6();
    p7();
    p8();
    p9();
    p10();
    return 0;

   }
