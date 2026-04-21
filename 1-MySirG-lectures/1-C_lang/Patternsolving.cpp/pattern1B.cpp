#include <iostream>
using namespace std;
int p6()
{
    int i,j,n;
    //cin>>n;
    
     for(i=1;i<=5;i++)
     n=1;
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && n){
            cout<<"*";
            n=0;
            }
            
            else{
            cout<<" ";
            n=1;
            }
        }
        
        cout<<endl;
    }
   
}
int p7()
{
     int i,j,n;
     //cin>>n;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-i || j>=4+i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}

int p8()
{
     int i,j,n,k;
    // cin>>n;
    
    for(i=1;i<=4;i++)
    k=1;
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i &&  j<=3+i){
          cout<<j; }
            else
            cout<<" ";
        }
        cout<<endl;
    }
  
}


int main()
{
   p6();
   p7();
 p8();
    return 0;
}