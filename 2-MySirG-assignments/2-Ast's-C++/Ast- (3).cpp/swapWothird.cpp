#include <iostream>
using namespace std;
void Wothird(int a ,int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"The swapped values are " <<a<<" "<<b<<endl;
    }
int main()
{
    int x,y,z;
    cout<<"Enter the values"<<endl;
    cin>>x>>y;
    Wothird(x,y);
    return 0;
}