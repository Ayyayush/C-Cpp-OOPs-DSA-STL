#include <iostream>
#include <cstring>
using namespace std;
int main()
{
     // string ke liye size() use hota h 
     // char array ke liye c++ mein strlen use hota h
    string str="Ayush";
  char str1[20]="Pandey";
    int l=str.size();
    int l2=strlen(str1);
    cout<<str<<" "<<str1<<endl;
    cout<<l<<endl<<l2<<endl;
    return 0;
}