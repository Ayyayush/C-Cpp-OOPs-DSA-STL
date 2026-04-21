#include <iostream>
using namespace std;

int add()
{
    int a,b,sum;
    cout<<"enter the values"<<endl;
    cin>>a>>b;
    sum =a+b;
    cout<<"sum is "<<sum<<endl;
    
}
int diff()
{
    int a,b,diff;
     cout<<"enter the values"<<endl;
    cin>>a>>b;
    diff =a-b;
    cout<<"diff is "<<diff<<endl;
    
}

int prod()
{
    int a,b,prod;
     cout<<"enter the values"<<endl;
    cin>>a>>b;
    prod=a-b;
    cout<<"prod is "<<prod<<endl;
    add();
 
    
}


int main()
{
cout<<"Hey buddy"<<endl;
add();
diff();
prod();
cout<<"Function definition done"<<endl;
return 0;
}