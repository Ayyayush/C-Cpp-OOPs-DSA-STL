#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void length1()
{
  string str1;
  cout<<"Enter the string "  <<endl;
  getline(cin,str1);
  int l=str1.size();
  cout<<"The length of the string is "<<l<<endl;
 
}
 void length2()
 {
    int i,c;
    string str2;
  cout<<"Enter the string "  <<endl;
  getline(cin,str2);
for(i=0;str2[i];i++)
c++;
  cout<<"The length of the string is "<<c<<endl;

 }
  int main()
  {
    length1();
    length2();
    return 0;
  }