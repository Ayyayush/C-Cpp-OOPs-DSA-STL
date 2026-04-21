#include <bits/stdc++.h>
using namespace std;
int p1()
{
    int n,m,i,j,k;
     k=0;
    for (i=1;i<=7;i++)
    { i<=4?k++:k--;
        
        for(j=1;j<=7;j++)
        
        {
           
            if(j>=5-k &&j<=3+k)
            {
                 cout<<"*";
                 }
         
            else 
            cout<<" ";
        }
        cout<<endl;
    }
  
}
int p2()

    {
    int n,m,i,j;
    int k=0;
   
    
    for (i=1;i<10;i++)
    {i<=4?k++:k--;
        for(j=1;j<10;j++)
        {
            if(j<=k)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}



int p3()

    {
    int n,m,i,j;
    int k;
   
    
    for (i=1;i<=4;i++)
    { k=i;
        for(j=1;j<=7;j++)
        {
           

            if(j<=3+k && j>=5-k)
            {
            cout<<k<<" ";
             j<4?k++:k--;
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
    
}

int p4()

    {
    int n,m,i,j;
    int k;
   
    
    for (i=1;i<=7;i++)
    {  
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
            {
            cout<<k--<<" ";
            
            
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int p5()
{

    int n,m,i,j;
    char k;
   for (i=1;i<5;i++)
    {k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i){
            cout<<k;
            j<4?k++:k--;
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
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



