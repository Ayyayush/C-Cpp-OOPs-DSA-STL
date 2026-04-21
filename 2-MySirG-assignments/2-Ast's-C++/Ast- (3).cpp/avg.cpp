#include <iostream>
using namespace std;
int avg(int a ,int b,int c)
{
    int avg;
    avg=(a+b+c)/3;
    return avg;
}
 int main()
 {
    int x,y,z,average;
    cout<<"Enter the numbers"<<endl;
    cin>>x>>y>>z;
    average=avg(x,y,z);
    cout<<"The average is "<<average<<endl;
    return 0;
 }