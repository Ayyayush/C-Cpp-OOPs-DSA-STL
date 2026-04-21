#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{ int i,c=0;
    string str;
    char ch=' ';
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    int l=str.size();
    for(i=0;i<l,str[i];i++)
    {
        if(str[i]==ch)
       str[i-1]=str[i];
       }
       for(i=l;i>=0,str[i];i--)
       {
        if(str[i]==ch)
        str[i+1]==str[i];
       }
   cout<<"The trimmed string is "<<str<<endl;
    return 0;

}