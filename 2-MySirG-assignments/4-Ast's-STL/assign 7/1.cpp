#include<iostream>
#include<list>
#include<vector>
#include <forward_list>
#include<string>
#include<algorithm>
using namespace std;

             
void m1()
{
forward_list<int> f1;                    // empty forward list 
f1={10,10,10,5,5,5,5,5};

for(auto x: f1)
cout<<x<<" ";
cout<<endl;
}

void m2()
{
   forward_list<int> f1; 
   f1.assign({10,10,10,5,5,5,5,5});              //forward list mein assign method se input kara skte h value 
   for(auto x:f1)
   cout<<x<<" ";
   cout<<endl;
}


int main()
{
    m1();
    m2();
    return 0;
}