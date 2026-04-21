#include <iostream>
using namespace std;  

 int p6()
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

int p7()
{
    int i,j,k;
    int a;
    
    for(i=1;i<=5;i++)
    {
       
        k=1,a=1;
        for(j=1;j<=9;j++)
        {
         if(j>=6-i && j<=4+i && k)
         {
            cout<<a;
            j>4?a--:a++;
            k=0;
           
         }
         else {
            cout<<" ";
             if(j==5)
            a--;
         k=1;
        
         }
        }
        cout<<endl;
    }
     cout<<endl;
}
       




int p8()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
         if(j<=5-i || j>=3+i)
         {
            cout<<"*";
         }
         else {
            cout<<" ";
         }
        }
        cout<<endl;
    }
    cout<<endl; 
}


int p9()
{
    int i,j;
    int a;
    for(i=1;i<=4;i++)
    {
        a=1;
        for(j=1;j<=7;j++)
        {
         if(j<=5-i || j>=3+i)
         {
            cout<<a;
            j<4?a++:a--;
         }
         else {
            cout<<" ";
             if(j==4)
            a--;
        
         }
        }
        cout<<endl;
    }
     cout<<endl;
}




int p10()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
         if(j<=5-i || j>=3+i)
         {
            cout<<k;
            j<4?k++:k-- ;
         }
         else {
            cout<<" ";
            if(j==4)
            k--;
         }
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