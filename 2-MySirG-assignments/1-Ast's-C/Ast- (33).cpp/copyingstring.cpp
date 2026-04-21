#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ 

     int i,c=0,d=0,spcl=0;
     string str1("My name is Ayush ");
      cout<<str1<<endl;
     char str2[]="This is my code";
     cout<<str2<<endl;
     char str[50],s[50];
     
     cout<<"Enter the string"<<endl;
    
     gets(str);
     for(i=0;str[i];i++)
     {
      s[i]  =str[i];
     
     }
     cout<<s<<endl;
     return 0;
}