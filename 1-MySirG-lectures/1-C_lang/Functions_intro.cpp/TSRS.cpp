#include <iostream>
using namespace std;

int add(int,int);



int main()
{
int s,x=3,y=4;
//call by value  hoga as function calll ho rha h values pass krke 
s=add(x,y); //actual arguements      return hoke value yhi aayegi
cout<<"sum is "<<s<<endl;
return 0;
}



//parenthesis khali nhi hoga
int add(int a,int b)//formal arguements
{
    int c=a+b;//taking  something
    cout<<c<<endl;
    return c;//return something
}