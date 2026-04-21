#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int a,i;
    cin>>a;
    deque<int> d1(a);
    for(i=0;i<d1.size();i++)                                         // DEQUE PROVIDES RANDOM ACCESS ITERATOR 
    cin>>d1[i];

    deque<int>::iterator it;
    for(it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
    cout<<endl;



    return 0;

}