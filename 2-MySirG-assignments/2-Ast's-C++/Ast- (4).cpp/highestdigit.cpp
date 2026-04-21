#include <iostream>
using namespace std;

void max(int a)
{
int max=1,rem=0;
while(a)
{
rem=a%10;
a=a/10;
if(max<rem)
{
    max=rem;
}
}

cout<<"The maximum digit is "<<max<<endl;

}
 int main()
 {
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    max(x);
    return 0;


 }
