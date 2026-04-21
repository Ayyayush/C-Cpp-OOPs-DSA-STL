#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    cout<<"one"<<endl;
    if(n>4)
    goto li;
    cout<<"two"<<endl;
     l2:
    cout<<"three"<<endl;
    li:
    cout<<"four"<<endl;
    goto l2;

return 0;
}