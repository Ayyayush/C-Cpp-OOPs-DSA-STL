#include<iostream>
#include<list>
#include<vector>
#include <forward_list>
#include<string>
#include<algorithm>
using namespace std;
// forward list does not have the concept of reverse iterator 



void m1()
{
forward_list<string> f2={"Ayush", "is", "a","good","boy"};
list <string> l1;

for(auto r:f2)               // kyunki forward list mein reverse iterator nhi hai hum pehle forward list ke elements ko aise containnner mein daal rhe h jisme reverse iterator h 
l1.push_back(r);
cout<<endl;



 list<string>::reverse_iterator it;
    for(it=l1.rbegin();it!=l1.rend();it++)
        cout<<*it<<" ";
        cout<<endl;
   
}
void m2()
{
   forward_list<string> f2={"Ayush", "is", "a","good","boy"};
   f2.reverse();                         //forward list mein reverse function se directly reverse kara skte hai 
   for(auto x:f2)
   cout<<x<<" ";
   cout<<endl;
}



int main()
{
    m1();
    m2();
    return 0;
}