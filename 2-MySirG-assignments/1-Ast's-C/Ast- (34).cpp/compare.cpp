#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int main()
{ int i;
    string str1,str2;
    cout<<"enter the string "<<endl;
    getline(cin, str1);
    getline(cin, str2);
     int k=str1==str2;
     int result=str1.compare(str2);
  cout<<"The result of the comparision is "<<k<<endl;
  cout<<"The result of the comparision is "<<result<<endl;
 
    return 0;
}