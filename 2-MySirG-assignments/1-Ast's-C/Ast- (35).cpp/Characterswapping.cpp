#include <iostream>
using namespace std;
int main()
{ int i,a,b,t;
    string str;
    cout<<"enter the string "<<endl;
    getline(cin, str);
    cout<<"Specify the indexes"<<endl;
    cin>>a>>b;
    for(i=0;str[i];i++)
    {
        t=str[a];
        str[a]=str[b];
        str[b]=t;
    }
        cout<<str<<endl;
   
    return 0;
}