#include <array>
#include  <iostream>
using namespace std;
int main()
{
    array<int,10> a1;
    int i,j,sum,max=0;

    for(i=0;i<10;i++)
    cin>>a1[i];

    max=a1[0];

     for(i=0;i<10;i++)
     {
        if(a1[i]>max)
        {
            max=a1[i];
        }
     }


     cout<<max<<endl;
     return 0;
}