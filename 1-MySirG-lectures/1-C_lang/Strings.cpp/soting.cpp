#include <iostream>
using namespace std;
int main()
{   int i;
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    char temp;
    int l=str.length();
    for(i=0;i<l,str[i];i++)
    {
        if(str[i]>str[i+1])
        {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    cout<<str<<endl;
    return 0;
}