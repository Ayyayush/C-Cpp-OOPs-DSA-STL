#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
  string str1,str2;
  cout<<"Enter the string "  <<endl;
  getline(cin,str1);
  getline(cin,str2);
  transform(str1.begin(), str1.end() , str1.begin() , ::toupper);
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower); 
  const char*= strcmp(str1,str2);
  cout<<"The result of the comparision is"<<char*<<endl;
  return 0;
}