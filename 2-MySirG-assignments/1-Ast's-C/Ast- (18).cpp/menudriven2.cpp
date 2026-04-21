#include <iostream>
#include <bits\stdc++.h>
using namespace std;
 void q2();
int main()
{
   q2();
   return 0;
}

void q2()
{ int c;
cout<<"Enter the case"<<endl;
cin>>c;
    int n,f,i,fact=1;
    while (1)
    {
        switch (c)
        {
 case 1:

 cout<<"Enter the input"<<endl;
 cin>>n;
        for(i=n;i>=1;i--)
        
            fact=fact*i;
        
        cout<<"Factorial is "<<fact<<endl;
        break;

     case 2:
     cout<<"Enter the input"<<endl;
     cin>>n;
     if(n%2==0)
     cout<<"even"<<endl;
     else 
     cout<<"Odd"<<endl;
     break;

     case 3:
     
     cout<<"Enter the input"<<endl;
     cin>>n;
     
     cout<<"The area of thr circle is "<<3.14*n*n<<endl;
     break;

      case 4:
      
      cout<<"Enter the input"<<endl;
      cin>>n;
      for(i=1;i<=n;i++)
      {
      f=f+i;
      }
      cout<<"Sum is "<<f<<endl;
break;



        default:
cout<<"Exit"<<endl;

        }
    }
    
}
