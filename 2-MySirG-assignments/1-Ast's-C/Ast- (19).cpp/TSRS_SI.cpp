#include <iostream>
using namespace std;


float si(float ,float,float);


int main()
{
    float simpi,x,y,z;
    cout<<"Enter the details"<<endl;
    cin>>x>>y>>z;
     simpi= si(x,y,z);
    cout<<"The simple interest is " <<simpi<<endl;
    return 0;
}



float si(float p,float r,float t)
{
   
    float sip=(p*r*t)/100;
    return sip;
}