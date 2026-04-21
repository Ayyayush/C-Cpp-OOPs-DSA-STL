#include <iostream>
using namespace std;
int main()
{
      // strcat()  yaad rakho ye character arrays ke sath use hota hai
   char s1[20]="Ayush";
   char s2[20]="Pandey";
   strcat(s1,s2);
   cout<<s1<<endl;
    return 0;
}