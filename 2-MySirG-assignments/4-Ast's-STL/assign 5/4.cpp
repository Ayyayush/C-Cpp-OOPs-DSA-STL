#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;



bool is_prime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
        if(x%i==0)
            return false;
    return true;
}


void m1()
{
    vector <int> v1={2,10,7,13,20,23};
  for(int i=0;i<v1.size();i++)
  {
    if(is_prime(v1.at(i)))          // iske liye pehle is prime naam ka ek dunction bana hona chahiye 
    {
        v1.erase(v1.begin()+i);
        i--;
    }
  }
  for(aut0 x:v1)
  cout<<v1<<" ";
  cout<<endl;
}







void p4()
{

   vector <int> v1={2,10,7,13,20,23};
    vector<int>::iterator newEnd,it;
    newEnd=remove_if(v1.begin(),v1.end(),[](int x)->bool { return is_prime(x);});
    for(it=v1.begin();it!=newEnd;it++)
        cout<<*it<<" ";
    cout<<endl;

}
int main()
{

    m1();
    p4();
    return 0;
    
}