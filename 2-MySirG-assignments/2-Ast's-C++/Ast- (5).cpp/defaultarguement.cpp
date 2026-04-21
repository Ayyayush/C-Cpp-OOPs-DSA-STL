#include <iostream>
using namespace std;
void add(int ,int , int =0);
 void add(int x,int y, int z)
 {
    int sum;
    sum=x+y+z;
    cout<<"The sum of the numbers is "<<sum<<endl;
 }

int main()
{
     int a,b;
     cout<<"Enter the nummbers"<<endl;
     cin>>a>>b;
 add(a,b);
 return 0;
}