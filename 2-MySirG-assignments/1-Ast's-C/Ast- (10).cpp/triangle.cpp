#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a+b;
    int y=a+c;
    int z=b+c;
    if(x>c && y>b && z>a)
    {
        cout<<"Triangle is possible"<<endl;

    }
    else{
        cout<<"Tiangle is not possible"<<endl;
    }
    return 0;
}