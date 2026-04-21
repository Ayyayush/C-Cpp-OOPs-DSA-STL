
#include <iostream>
using namespace std;
int main()
{
      // s1+=s2 isse append ho jayega extra space nhi lagega
      // s1=s1+s2 isse copy create ho rhi h jisse extra space bhi lag rha h
    string str1="Ayush";
    string str2("Pandey");
    string str3=str1+str2;
    cout<<str3<<endl;
    return 0;
}