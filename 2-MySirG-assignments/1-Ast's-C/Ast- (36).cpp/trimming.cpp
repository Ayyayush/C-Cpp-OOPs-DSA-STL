#include <iostream>

#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
  string str;
  cout<<"Enter the string"<<endl;
  getline(cin,str);
 
  int i,l;
  l=str.size();
  
  for(i=0;l;i++)
  {
    if(str[i]!=' ')
    break;

  }
  if(str[i]!='\0')
  (str,str+i);
  for(i=0;str[i];i++);
  i--;
  while(str[i]==' ')
  i--;
  str[i+1]='\0';
  cout<< str<<endl;
  return 0;
}