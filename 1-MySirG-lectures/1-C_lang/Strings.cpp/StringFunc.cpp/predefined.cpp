#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
     string str2="Ayush pandey";
    
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    int l =str.size();

    str.pop_back();
   cout<<str<<endl;

   str.push_back(75);
   cout<<str<<endl;

  char ch1 =str.front();
   cout<<ch1<<endl;

  char ch2=str.back();
   cout<<ch2<<endl;

   sort(str.begin(),str.end());
   cout<<str<<endl;

   reverse(str.begin(),str.end());
  cout<<str<<endl;

 string s=str2.substr(2,5);
  cout<<s<<endl;

  // specific index 
 
  cout<<str2.at(4)<<endl;
    
    return 0;
}