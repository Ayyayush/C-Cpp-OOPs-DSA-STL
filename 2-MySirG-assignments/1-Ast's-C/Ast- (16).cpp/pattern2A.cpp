#include <iostream>
using namespace std;
int p1()
{
    int i,j;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
    {
        if(j>=5-i && j<=3+i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    }
    cout<<endl;
   }

int p2()
{
    int i,j;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
    {
        if(j>=i && j<=8-i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    }
    cout<<endl;
   }
int p3()
{
    int i,j,k;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=8;j++)
    {
        if(j>=6-i && j<=4+i && k )
        {
            cout<<"*";
            k=0;
        }
        else
        {
            cout<<" ";
            k=1;
        }
    }
    cout<<endl;
    }
    cout<<endl;
   }

int p4()
{
    int i,j,k;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=4;i++)
    {k=1;
        for(j=1;j<=7;j++)
    {
        
        if(j>=5-i && j<=3+i)
        {
            cout<<k;
            j>3?k--:k++;
        }
        else
        {
            cout<<" ";
            if(j==4)
            k--;
        }
    }
    cout<<endl;
    }
    cout<<endl;
   }

   
int p5()
{
    int i,j;
    char k;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=4;i++)
    {
         k='A';
        for(j=1;j<=7;j++)
    {
        if(j>=i  && j<=8-i)
        {
            cout<<k++;
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    }
    cout<<endl;
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