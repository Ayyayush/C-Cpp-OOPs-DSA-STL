#include <iostream>
using namespace std;
void hcf()
{
    int a,b,i,factor;
    cout<<"Enter the numbers to find their hcf"<<endl;
    cin>>a>>b;
    for(i=(a>b?a:b);i<=(a*b);i++)

    {
        if(i%a==0 && i%b==0)
        {
            factor =i;
            break;
        }
    }
    cout<<"The hcf of the numbers is "<< factor<<endl;
    
}
int main()
{
    hcf();
    return 0;
}