#include <iostream>
#include <vector>
using namespace std;
void m1()
{
vector<int>v1={4,2,8,4,12,22,2,};

for(int i=1;i<v1.size();i++)
{
    if(v1[i]<v1[i+1]  && v1[i]<v1[i-1])
    {
        cout<<v1[i]<<" ";
    }
}
cout<<endl;
}



vector<int> q5()
{
    vector<int>v1={20,50,10,30,50,40,60};
    vector <int> v2;
    vector<int>::iterator it;
    for(it=v1.begin()+1;it!=v1.end()-1;it++)
        if(*it < *(it-1) && *it< *(it+1))
            v2.push_back(*it);
    return v2;

}


int main()
{
     m1();
    vector<int>v2;
    v2=q5();
    for(auto x :v2)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}