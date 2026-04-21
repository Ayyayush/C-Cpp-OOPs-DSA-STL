#include <iostream>
#include <cstring>
using namespace std;
void revwords()
{  
  int i;
   string str;
   char ch= ' ';
   cout<<"Enter the string"<<endl;
   getline( cin,str);
     int c=0,l;
   
  
   for( i<100; i>=0,str[i]!='\0';i--)
   {
    if(str[i]==ch)
    {
     reverse(str.begin(), str.end());

  
 
   }
     cout << "Reversed string: " << str << endl;
   }
 
   
}

int main()
{
revwords();
return 0;
}