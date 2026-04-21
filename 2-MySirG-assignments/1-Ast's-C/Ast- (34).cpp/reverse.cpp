#include <iostream>
using namespace std;
int main()
{ int i;
    string str;
    cout<<"enter the string "<<endl;
    getline(cin, str);
    int l=str.size();
    for(i=0;str[i],i<=l;i++)
    {
        cout<<str[l-i-1];
    }
    return 0;
}