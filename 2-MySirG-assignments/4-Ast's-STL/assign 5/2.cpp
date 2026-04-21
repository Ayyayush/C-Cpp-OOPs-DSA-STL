#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void m1()
{
    vector <int> nums={3,5,6};
    nums.insert(nums.end()-1,3,25);           // isse last elt ke baad 3 times 25 insert hoo jayega 
    for(auto x:nums)
    cout<<x<<" ";
    cout<<endl;
}


int main()
{
  m1();
 return 0;
}