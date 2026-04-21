#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 23:
        cout<<"23"<<endl;
        break;
        case -45:
        cout<<"-45"<<endl;
        break;
        case 0:
        cout<<"0"<<endl;
        break;
        case 'A':
        cout<<"A"<<endl;
        break;
        default:
        cout<<"Kem cho"<<endl;
    }
    cout<<"out"<<endl;
    return 0;
}