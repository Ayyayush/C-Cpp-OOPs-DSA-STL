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
    if(str[i]=='a' || str[i]=='A' || str[i]=='e'  || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'  )
    { c++;
   }
   }
   cout<<"The number of vowels is "<<c<<endl;
   
}

int main()
{
vowels();
return 0;
}