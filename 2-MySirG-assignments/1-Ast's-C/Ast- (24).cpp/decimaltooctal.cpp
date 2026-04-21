#include <iostream>
using namespace std;
void dto(int );


int main()
{
 int m;
 cout<<"Enter the input"<<endl;
 cin>>m;
 dto(m);
 return 0;
}
 void dto(int n)
 {
    if(n>=1)
    {
     dto(n/8);
    cout<<n%8;
 }
    
 }