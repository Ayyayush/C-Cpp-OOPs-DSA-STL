#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c,p;
     float d;
    cin>>n;
    switch (n)
    {
        case 1:
        cout<<"Addition"<<endl;
       
        cin>>a>>b;
         c=a+b;
        cout<<"Sum is "<<c<<endl;
        break;

        case 2:
        cout<<"Subtraction"<<endl;
        
         cin>>a>>b;
        c=a-b;
        cout<<"Difference is "<<endl;
        break;

        case 3:
        cout<<"Division"<<endl;
        
         cin>>a>>b;
       d=a/b;
        cout<<"Quotient is "<<d<<endl;
        break;

        case 4:
        cout<<"Multiplication"<<endl;
       
         cin>>a>>b;
         p=a*b;
        cout<<"Product is "<<p<<endl;
        break;

        default :
        cout<<"Exit"<<endl;
       }
       cout<<"Yupp"<<endl;
}