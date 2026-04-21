#include <iostream>
using namespace std;
 int add(int a,int b)
 {
return a+b;
 }
 double add(double a ,double b)
 {
return a+b;
 }
int main()
{ 
    int x,y,sum;
    cout<<"Enter the inputs"<<endl;
    cin>>x>>y;
    sum=add(x,y);
    cout<<"The sum of the numbers "<<sum<<endl;
    return 0;

}