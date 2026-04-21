
#include <iostream>
using namespace std;
int main()
{
    int n,sum,div,prod,diff;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Division"<<endl;
    cout<<"4.Multiplication"<<endl;
     cout<<"Enter the case"<<endl;
    cin>>n;
   
    switch(n)
    {
        case 1:
        sum =5+6;
          cout<<sum<<endl;
        break;
        case 2:
         diff=7-2;
        cout<<diff<<endl;
        break;
        case 3:
         div=9/3;
        cout<<div<<endl;
        break;
        case 4:
         prod=6*8;
        cout<<prod<<endl;
        break;
        default:
        cout<<"Kem cho"<<endl;
    }
    cout<<"yippee"<<endl;
    return 0;
}