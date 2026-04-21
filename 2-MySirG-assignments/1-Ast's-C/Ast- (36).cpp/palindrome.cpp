// C++ program to reverse a string using the reverse()
// function
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;


void palinM1()
{
    string str = "Hello, World!";
     string str2 = "Hello, World!";

    cout << "Original string: " << str << endl;

    // Reverse the string using the reverse() function
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;
 
  int result1=str.compare(str2);

  if(result1==0)
  cout<<"The string is palindrome "<<endl;
  else
  cout<<"The string is not palindrome "<<endl;

cout<<endl;
   
}
void palinM2()
{
  string str;
  cout<<"Enter the string"<<endl;
  getline(cin,str);
 
  int i,l;
  l=str.size();
  
  for(i=0;i<l/2;i++)
  {
    if(str[i]!=str[l-1-i])
   cout<<"String not palindrome"<<endl;
   break;
   else
   cout<<"It is palindromic string"<<endl;
  }
}
int main()
{
  palinM1();
  palinM2();
  return 0;
}
