#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  char str[30], ch = ' ';
  int i, k, count = 0;

  cout << "Enter the string:" << endl;
  gets(str);
  for(i=0;str[i];i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
  }
  cout<<str<<endl;
 
  return 0;
}
