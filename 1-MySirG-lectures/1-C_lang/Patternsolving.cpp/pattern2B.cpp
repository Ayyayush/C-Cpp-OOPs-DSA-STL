
#include <iostream>
using namespace std;
int p1()
{

    int n,m,i,j,l;
    char k;
   for (i=1;i<5;i++)
    {k='A';
    l=1;
        for(j=1;j<=8;j++)
        {
            if(j>=5-i && j<=4+i){
                if(j<=4)
            cout<<k++;
            else 
           cout<<l++;
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int p2()
{

    int n,m,i,j,l;
    char k;
   for (i=1;i<5;i++)
    {k='A';
    l=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i){
                if(j<=4)
            cout<<l++;
            else 
           cout<<k++;
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int p3()
{
     int i,j,n,k;
   
    for(i=1;i<=5;i++)
    { k=1;
        for(j=1;j<=5;j++)
        {
             if(j<=i && k)
             {
            cout<<k;
            k=1-k;
             }
            else
            {
            cout<<" ";
         
            }
        
        }
        cout<<endl;
    } cout<<endl;
    
}


int p4()
{
     int i,j,n,k;
   
    for(i=1;i<=7;i++)
    { k=1;
        for(j=1;j<=7;j++)
        {
             if((i==1 || j==1|| i==7 || j==7 )|| (i>=3 && i<=5 && j>=3 && j<=5) && (i==3 || i==5 || j==3 || j==5 ))
             {
            cout<<"*";
          
             }
            else
            {
            cout<<" ";
         
            }
        
        }
        cout<<endl;
    } cout<<endl;
    
}
p5()
{
   int i,j,n;
   char k='A';
   
    for(i=1;i<=5;i++)
    {k++;
        for(j=1;j<=5;j++)
        { 
             if(j<=i)
             {
                
            cout<<--k;
          
             }
            else
            {
            cout<<" ";
         
            }
        
        }
        cout<<endl;
    } cout<<endl;
      
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

