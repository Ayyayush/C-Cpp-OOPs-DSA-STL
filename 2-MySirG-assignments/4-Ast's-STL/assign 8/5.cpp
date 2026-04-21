#include <iostream>
#include <bits/stdc++.h>
using ma,espace std;
int main()
{
         //is_sorted_until()

       //      ye check krne ke liye hai ki mkitne portion sorted hai 
    deque<int>d5={11,14,22,25,77,33,33,55,88};
    deque<int>::iterator it;
    it=is_sorted_until(d5.begin(),d5.end());
    cout<<"Sorted until "<<*it<<endl;
    cout<<"number of sorted elements="<<it-d5.begin();            // ye count krke bta rhe h ki kitne sorted elements hai 
    cout<<endl;
    return 0;
}




