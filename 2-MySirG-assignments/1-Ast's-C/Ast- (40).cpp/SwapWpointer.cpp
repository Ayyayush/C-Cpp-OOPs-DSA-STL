#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values "<<endl;
    cin>>a>>b;
    int *c;
    c=&a;
    a=b;
    b=*c;
    cout<<"The swapped values are "<<a<<" "<<b<<endl;
    return 0;

}