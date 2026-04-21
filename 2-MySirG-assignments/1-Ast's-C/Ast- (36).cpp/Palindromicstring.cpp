#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{ int i,c=0;
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    int l=str.size();
    for(i=0;i<l/2,str[i];i++)
    {
        if(str[i]!=str[l-i-1])
        break;
        else
        c++;
    }
    if(c>0)
    cout<<"the string is palindromic"<<endl;
    else
    cout<<"the string is not palindromic"<<endl;
    return 0;

}