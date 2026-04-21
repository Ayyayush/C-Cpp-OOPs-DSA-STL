#include <iostream>
using namespace std;
int add();

 
int main()
{
    int sum;
sum=add(); // value return hoke exactly yhi aayegi
cout<<"sum is "<<sum<<endl;
return 0;

}

int add()// parenthesis emtpy 
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    //cout<<c<<endl;
    return c;   // returning something value whi jayegi jaha function call hua tha
    // return ke baad kuch likha toh wo nhi chalega 
    // isliye ek type ki hi value return ho skti h
    cout<<"hello"<<endl; //nhi chalega

}