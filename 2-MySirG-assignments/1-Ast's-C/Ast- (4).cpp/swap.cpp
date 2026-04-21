#include <iostream>
using namespace std;
int main()
{
   int x,y,temp;
    cin>>x>>y;
   
    temp=y;
    y=x;
     x=temp;
    cout<<x<<endl<<y<<endl;
    return 0;

}