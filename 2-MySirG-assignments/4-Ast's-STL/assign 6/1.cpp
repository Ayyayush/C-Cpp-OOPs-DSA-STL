#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


 void m1()
{
string str;
getline(cin,str);

// transform(str.begin(),str.end()tolower());
reverse(str.begin(),str.end());
cout<<str<<endl;
}



void m2()
{
    list <string> l1={"Bhopal","Indore","Pune","Jaipur"};
    list<string>::reverse_iterator it;
    for(it=l1.rbegin();it!=l1.rend();it++)
        cout<<*it<<" ";
    cout<<endl;


}

int main()
{
m1();
m2();
    return 0;
}