#include <iostream>
using namespace std;
void fibonacci(int);
int fib(int );
int main()
{
int x;
cout<<"Enter the term"<<endl;
cin>>x;
cout<<endl;
fibonacci(x);
return 0;
}


 int fib(int n)
 {
    if(n==0 || n==1)
    return n;
    return fib(n-1)+fib(n-2);
 }


 void fibonacci(int n)
 {

 int i;
    for(i=0;i<=n;i++)
    
        cout<<fib(i)<<" ";


 }

 /*void fibonacci(int n)
 {
if(n>=0)    
{
    fibonacci(n-1);

        cout<<fib(i)<<" ";


 }
 }*/