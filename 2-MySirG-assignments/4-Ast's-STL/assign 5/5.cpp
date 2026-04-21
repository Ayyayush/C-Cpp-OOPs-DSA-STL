#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void p5()
{
    vector <vector<int>> vec={
        {1,2,3,4,5},
        {10,20,30,40,50},
        {100,200,300,400,500}
    };
    vector <int> v1; 
    v1.insert(v1.end(),vec.at(0).begin(),vec.at(0).begin()+3);        // v1 apne end yaha 0 positiion se vec ke 0,1,2 wale elements rakh lega 
    v1.insert(v1.end(),vec.at(1).end()-2,vec.at(1).end());            
    v1.insert(v1.end(),vec.at(2).begin(),vec.at(2).end());             
    for(auto x : v1)
        cout<<x<<" ";
    cout<<endl;
}


int main()
{
    p5();
    return 0;
}