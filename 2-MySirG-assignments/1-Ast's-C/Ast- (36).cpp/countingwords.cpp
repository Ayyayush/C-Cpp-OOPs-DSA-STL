#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

   
  int main(){
   
  string str;
  cout<<"Enter the string"<<endl;
  getline(cin,str);
 
  int i,l,c=0;
  l=str.size();
  
  for(i=0;i<l;i++)
  {
    if(str[i]==' ')
    c++;
   }
   cout<<"The number of words is "<<c+1<<endl;
   return 0;
   }

