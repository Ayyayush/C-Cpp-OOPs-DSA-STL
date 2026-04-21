#include <iostream>
using namespace std;
int main()
{
   // to_string() ye use hota h numeric value ko string mein badalne ke liye
   // jaise 432 ke aage 1 add krna h toh pure ko string mein badal ke concatenate kr skte h
   int num=432;
   string str=to_string(num);
   str+="1";
   cout<<str;
    return 0;
}