#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  char str[50], ch;
  int i, k,l,count = 0;

  cout << "Enter the string:" << endl;
  gets(str);
  for(i=0;str[i];i++)
  str[i-1]='\0';
 l=i-1;
    for(i=0;i<l/2;i++)
  {
   ch=str[i];
   str[i]=str[l-1-i];
   str[l-1-i]=ch;
    }
  cout<<str<<endl;
 
  return 0;
}
