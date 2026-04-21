#include <iostream>
using namespace std;
int main()
{ int i ,j,c=0;
    
    string num[5]={"one ", "two ", "Three" ,"four" , "five"};
   
   for(j=0;j<=4;j++)
   {
    for( i=0;i<=20;i++)
    {
    
    if(num[i]=='A' ||  num[i]=='E' || num[i]=='I'|| num[i]=='O'|| num[i]=='U' || num[i]=='a' || num[i]=='e'  || num[i]=='i' || num[i]=='o' || num[i]=='u')
   c++;
    }
   }
     cout<<"The number of vowels in the 2D string is "<<c++<<endl;
    return 0;
}