#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int>v1={3,5,7,8,5};               // vector is dynamic so we don't tell the size 

for(int i=0;i<v1.size();i++)                // ye using subscript operator hai 
cout<<v1[i]<<" ";
cout<<endl;
cout<<v1[6];   
cout<<endl;                      // isme garbage value print hogi kyunki subscript operator mein bound checking nhi hoti 


vector <float> v2={3.5,5.65};              // using at operator 
for(int i=0;i<v2.size();i++)          
cout<<v2.at(i)<<" ";
cout<<endl; 

vector <string> v3={"Ayush","is","a","good","boy"};      // using implicit operator 
for(auto x:v3)
cout<<x<<" ";
cout<<endl;

vector<int> v4={55,66,77,88,99};
vector<int> :: iterator it;
for(it=v4.begin();it!=v4.end();it++)
cout<<*it<<" ";
cout<<endl;

v4.push_back(0);
v4.insert(v4.begin(),3333);
v4.erase(v4.begin()+2);
v4.emplace(v4.begin(),1);

for(auto x:v4)
cout<<x<<" ";


cout<<endl;
return 0;

}