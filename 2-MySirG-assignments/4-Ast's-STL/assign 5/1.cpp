#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void m1()
{
    int index=0;
vector<int>v1={4,2,8,4,-12,22,2,};

for(int i=0;i<v1.size();i++)
{
    if(v1[i]<0)
    {
       index=i;
       break;      // ek baar negative no mil jaye toh loop ke bahar aa  jao       


    }
}

for(int i=index;i<v1.size();i++)
{
v1.erase(v1.begin()+i,v1.end());
}


for(int i=0;i<v1.size();i++)
cout<<v1[i]<<" ";
cout<<endl;


}



vector<int> p1(vector<int> v1)                // p1 function mein ye vector v1 recieve ho gya h as a arguement 
{  
    v1.erase(find_if(v1.begin(),v1.end(),[](int x) -> bool {return x<0;}),v1.end());
    return v1;
}




int main()
{
    m1();

    vector <int> v1={10,60,30,-40,70,-10,20};
    for(auto x:p1(v1))
    cout<<x<<" ";
    cout<<endl;
    return 0;
}