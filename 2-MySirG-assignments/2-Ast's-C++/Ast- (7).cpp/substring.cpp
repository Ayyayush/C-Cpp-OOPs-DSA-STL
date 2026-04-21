#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void substring(string str)
{
    int si,i,j,ei,l;
    cout<<"Enter the starting index and last index"<<endl;
    cin>>si>>ei;

     l=str.size();
        
    for(i=si;i<=ei;i++)
    {
      cout<<str[i];
    }
    

}
int main()
{
    string subs;
    cout<<"Enter the string "<<endl;
    getline(cin,subs);
    substring(subs);
    return 0;
}