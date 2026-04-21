#include <iostream>
#include <array>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
 array <int,10> a1={29,60,92,48,77,16,8,36,52,83};
    sort(a1.begin(),a1.end());
    for(auto x:a1)
        cout<<x<<" ";
    cout<<endl;
cout<<endl;

    return 0;
}