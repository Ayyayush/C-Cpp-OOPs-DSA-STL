#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void m1()
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

void m2()
{
    
    int a,i;
    cin>>a;
    deque<int> d2(a);
    for(i=0;i<d2.size();i++)                                         // DEQUE PROVIDES RANDOM ACCESS ITERATOR 
    cin>>d2[i];

      deque<int>::iterator it;


}
int main()
{
    m1();
    return 0;
}