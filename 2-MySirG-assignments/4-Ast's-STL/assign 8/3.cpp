#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

int a,i;
    cin>>a;
    deque<int> d2(a);
    for(i=0;i<d2.size();i++)                                         // DEQUE PROVIDES RANDOM ACCESS ITERATOR 
    cin>>d2[i];
 
 
    deque<int>::iterator it;
    it=(max_element(d2.begin(),d2.end()));

   cout<<*it<<" ";
   cout<<endl;
    
}