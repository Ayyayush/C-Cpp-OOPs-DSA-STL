#include <iostream>
#include <cstring>
using namespace std;
void sort(string str)
{
          int i,r;
    char ch;
    int l=str.size();
    for(r=0;r<l;r++)
    {
    for(i=0;str[i],i<l;i++)
    {
         if(str[i]>str[i+1])
         {
        ch=str[i];
        str[i]=str[i+1];
        str[i+1]=ch;
    }

    }
      cout<<"The sorted string is "<<str<<endl;
    }
  
}
 void frequency( string str)
 {    
     int i,count;
    
    
    string str2;
     int l=str.size();
     for(i=0;i<l,str[i];i++)
     {
      str2[i] =str[i];
     
     }
    
    sort(str2);
    for(i=0,count=1;str2[i];i++)
    {
       if( str2[i]==str2[i+1])
       {
        count++;
       }
       else{
        cout<<"The frequency of char "<<str2[i]<<" is "<< count<<endl;
        count=1;
       }
    }
 }

int main()
{
          string temp;
      cout<<"Enter the string"<<endl;
    getline(cin,temp);
   
frequency(temp);
return 0;
}