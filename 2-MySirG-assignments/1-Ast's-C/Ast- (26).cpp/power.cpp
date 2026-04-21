#include <iostream>
using namespace std;
double power(double x,double y)
{
    if(y==0)
    return 1;
    if(y>0)
    {
        return  power(x,y-1)*x; // 2 ki power 5 h  toh 2 ki power 4 nikal ke usme 2 ka multiply kar do
    }
    else {
        return power(x,y+1)*(1/x); // power negative h jaise 2 ki power-3 toh -3 +1 kar do toh 2 ki power -2 ho jayegi firr result mein 1/x ka multiply kar denge  as 2ki power -1 = 1/2 aise
    }
}

 int main()
 {
    double  a,b,dpower;
    cout<<"Enter the number and it's power"<<endl;
    cin>>a>>b;
    dpower=power(a,b);
     cout<<dpower<<endl;
    return 0;
 }