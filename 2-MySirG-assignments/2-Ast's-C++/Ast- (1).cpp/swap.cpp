#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The swapped values are "<<a<<" "<<b<<endl;
    
 
}
 int main()
 {   int p,q;
     cout<<"Enter the numbers"<<endl;
    cin>>p>>q;
    swap(p,q);
    return 0;
 }