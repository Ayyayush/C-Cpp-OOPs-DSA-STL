#include <iostream>
using namespace std;
int fact(int);
 int fact(int n)
 {
if(n==0)
return 1;
return n*fact(n-1);
 }
 int main()
 {
    int a,factorial;
    cout<<"Enter the input"<<endl;
    cin>>a;
    factorial=fact(a);
    cout<<factorial<<endl;
    return 0;

 }









