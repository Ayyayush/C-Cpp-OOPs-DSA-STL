#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
                                                                    // even values front mein odd values end mein 
void q5()
{
    vector <int> v1={30,51,23,17,6,42};
    list<int>l1;
    for(auto x: v1)
    {
        if(x%2==0)
            l1.push_front(x);
        else
            l1.push_back(x);
    }
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    q5();
    cout<<endl;
    return 0;
}