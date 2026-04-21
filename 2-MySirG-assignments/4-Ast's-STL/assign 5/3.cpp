#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;



void p3()
{
    vector<int> given_vector = {2,4,10,5,7,6,15,20,3,9};            // jaha tak consecutive elements sorted hai unhe ek vector mein rakhna hai 
    vector <vector<int>> v1;
    vector <int> *ptr;
    int i=0,s,e,j=0;
    while(i<given_vector.size()-1)     // i ki value 0 se start ho rhi h aur last element se ek kam yani 8 tak chalega 
    {
        s=i;
        while(i<given_vector.size()-1 && given_vector.at(i)<given_vector.at(i+1))
            i++;
        e=++i;
        ptr=new vector<int>();              // vector dynamicaaly create hoke pointer mein ja rha h 
        ptr->insert(ptr->begin(),given_vector.begin()+s,given_vector.begin()+e);
        v1.insert(v1.begin()+j,*ptr);
        j++;
        
    }
    for(auto x : v1)
    {
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
}



int main()
{
    p3();
    return 0;

}