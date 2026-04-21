#include <iostream>
using namespace std;
void lcm(int a,int b,int c)
{

    int i,factor,sh,h;
    sh=a>b?a:b;
    h=sh>c?sh:c;
    for(i=h;i<=(a*b*c);i++)

    {
        if(i%a==0 && i%b==0 && i%c==0)
        {   factor=i;
            break;
        }
    }
    cout<<"The lcm of the numbers is "<< factor<<endl;
    
}
int main()
{
   int x,y,z;
    cout<<"Enter the numbers to find their lcm"<<endl;
    cin>>x>>y>>z;
    lcm(x,y,z);
    return 0;
}