#include<iostream>
using namespace std;
void factorial()
{
     int n,i,fact=1;
     cout<<"Enter the number"<<endl;
cin>>n;

 for(i=n;i>=1;i--)
 {
    fact=fact*i;
 }
 cout<<"the factorial is "<<fact<<endl;
 
}
 int main()
 {
    factorial();
    return 0;
 }