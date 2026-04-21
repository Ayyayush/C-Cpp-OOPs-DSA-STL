#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
    cin>>x>>y;
    temp=temp^y;
    y=y^x;
    x=x^y;
    cout << "After Swapping: x = "
         << x << ", y= " << y;
   
}