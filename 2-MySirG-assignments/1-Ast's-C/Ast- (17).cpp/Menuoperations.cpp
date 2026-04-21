#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the case"<<endl;
     cin>>n;
     cout<<"Enter the sides"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
   
    switch (n)
    {
        case 1:
        cout<<"Isoceles triangle case"<<endl;
        x=a+b,y=a+c;z=b+c;
        if(a==b || b==c || a==c)
        {
            cout<<" Yes a Isoceles Triangle"<<endl;
        }
        else 
        {
            cout<<"Not a Isoceles triangle"<<endl;
        }

         case 2:
         cout<<"Right Angled Triangle case"<<endl;
         x=a+b,y=b+c;z=a+c;
         if(x==c && y==a && z==b)
         {
            cout<<"Yes a Right Angled triangle"<<endl;
         }
         else 
         {
            cout<<"Not a Valid Right Angled triangle"<<endl;
         }

          case 3:
          cout<<"Equatorial Triangle case "<<endl;
          if(a==b && b==c)
          {
            cout<<"Equatorial Triangle"<<endl;
          }
          else 
          {
            cout<<"Not a equatorial triangle "<<endl;
          }
          case 4:
          cout<<"Exit"<<endl;

          default:
           cout <<"Not a valid case"<<endl;
    }
    cout<<"Yupp"<<endl;
    }
