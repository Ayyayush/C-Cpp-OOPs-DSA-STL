#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void m1()
{
 vector <int> v1={30,50,20,10,60};
    list <int> l1;
    l1.insert(l1.begin(),v1.begin(),v1.end());      // hume list create krni hai with help of vector integers 
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    m1();
   
    return 0;
}