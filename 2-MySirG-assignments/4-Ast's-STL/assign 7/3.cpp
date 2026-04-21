#include<iostream>
#include<list>
#include<vector>
#include <forward_list>
#include<string>
#include<algorithm>
using namespace std;


             
void m1()
{
    int a,count=0;
    cin>>a;

forward_list <int> f3={40,60,77,589,33,44};
for(auto x:f3)
{
if(x>a)                                         // forward list mein subscript aur at operator work nhi krte 
{
    count++;
}
}
cout<<count<<endl;
}

void m2()
{
    
forward_list <int> f3={40,60,77,589,33,44};
int num,count=0;
cin>>num;
auto f=[&](int x)->void {if(x>num)count++;};
for(auto x:f3)
{
    f(x);
}
cout<<"count="<<count<<endl;


}




int main()
{
    m1();
    m2();
    return 0;
}