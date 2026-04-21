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
     char str[50];
     
     cout<<"Enter the string"<<endl;
    
     gets(str);
     for(i=0;str[i];i++)
     {
    if(str[i]>='a' || str[i]<='z' )
    c++;
    else if(  str[i]>='A' || str[i]<='Z') 
    c++;
    else if(str[i]>='0' || str[i]<='9')
    d++;
    else 
    spcl++;
     }
   
    cout<<"The number of alphabets is "<<c<<endl;
    cout<<"The number of digits is  "<<d<<endl;
    cout<<"The number of special characters is "<<spcl<<endl;
    return 0;
}