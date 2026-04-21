#include <iostream>
#include <cstring>
using namespace std;
void vowels()
{  

   
    string  str("This is a string function program");
     int c=0,l;
     l=str.size();
  
   for(int i=0;i<=l;i++)
   {
    if(str[i]>='0' && str[i]<='9' ||  str[i]>='A' && str[i] <='Z' || str[i]>='a' && str[i] <='z' )
     c++;
   
   }
   if(c>0)
   cout<<"The string is alphanumeric "<<endl;
   else
   cout<<"The string is  not alphanumeric "<<endl;
}

int main()
{
vowels();
return 0;
}