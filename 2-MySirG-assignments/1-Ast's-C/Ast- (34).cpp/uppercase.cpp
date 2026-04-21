#include <iostream>
using namespace std;
int main()
{ int i;
    string str;
    cout<<"enter the string "<<endl;
    getline(cin, str);
    
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    cout<<str<<endl;
    return 0;
}