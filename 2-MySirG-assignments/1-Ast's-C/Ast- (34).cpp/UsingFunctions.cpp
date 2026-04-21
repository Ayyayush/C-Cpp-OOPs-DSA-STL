#include <iostream>
#include <cstring>
#include  <bits/stdc++.h>
using namespace std;
int length()
{
    string str("Ram and Shyam");
    int l=str.size();
    cout<<"Length of string is "<<l<<endl;
     cout<<endl;
      cout<<endl;
    return 0;

}
int reverse()
{  int i;
    string str("Ram and Shyam");
    int l=str.size();
    for(i=l;i>=1;i--)
    {
        cout<<i;
    }
    cout<<endl;
     cout<<endl;
    return 0;
}
int compare()
{   int i;
   string str1("Ram and Shyam");
   string str2("Ram and Shyam");
   string str3("Hari and Ravi") ;
     int result1=str1.compare(str2);
      int result2=str3.compare(str2);
     cout<<result1<<endl<<result2<<endl;
    cout<<endl;
     cout<<endl;
}
int uppercase()
{
    string str("ram and shyam"); 
   transform(str.begin(), str.end(), str.begin(), ::toupper); 
   cout<<str<<endl;
   cout<<endl;
}
 int lowercase()
 {
    string str("ram and shyam"); 
   transform(str.begin(), str.end(), str.begin(), ::tolower); 
   cout<<str<<endl;
   cout<<endl;

 }
int main()
{
length();
reverse();
compare();
uppercase();
return 0;
}