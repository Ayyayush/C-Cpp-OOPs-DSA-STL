#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{ int i,c=0,j,dig;
    string str;
    char ch=' ';
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    int l=str.size();
    for(i=0;i<l,str[i];i++)
    {
        if(str[i]==ch)
        {
        dig==i;
        for(j=dig;j>=0,str[i];j--)
        cout<<str[j]<<" ";
       }
    }
     return 0;

}