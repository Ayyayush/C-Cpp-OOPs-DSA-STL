#include <iostream>
using namespace std;
 void twoDchar()
{
     int i,l;
     for(i=0;i<n;i++)
     {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
     }

}
 void vowelsTWOD(char str[][20],int n)
 {
     char v="aeiouAEIOU";
     int i,j ,k,count;
    inputStrings(str,n);
    for(i=0;i<n;i++)
    {
        for(j=0;count=0;str[i][j];j++)
        for(k=0;v[k];k++)
        if(str[i][j]==v[k])
        count++;
         cout<<"Vowels in string "<<Str[i] << "are "<<count<<endl;
    }
   
 }
int main ()
{
    char str[5][20];
    count VowelsTWOD(str,5);
    cout<<endl;
    return 0;

}