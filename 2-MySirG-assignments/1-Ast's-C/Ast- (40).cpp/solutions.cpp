#include <iostream>
using namespace std;
void swap(int *p,int *q)
{
    int t;
    t=*p; // *p = special variable
    *p=*q;
    *q=t;
   cout<<"The swapped values are "<<*p <<","<<*q<<endl;
   
}


void search_all_occurances(char *str,char ch,int *arr)
{
    int i,j;
    for(i=0,j=0;str[i],i++)
    {
        if(str[i]==ch){
            arr[j]==i;
            j++;
        }
    }
}

 char*  uppercase(char *str)
 {
    int i;
    for(i=0;str[i];i++)
    if(str[i] >='a' && str[i]<='z')
    str[i]=str[i]-32;
    return str;
 }


char*  lowercase(char *str)
 {
    int i;
    for(i=0;str[i];i++)
    if(str[i] >='A' && str[i]<='Z')
    str[i]=str[i]+32;
    return str;
 }


void extract_string(char *str , int start_index , int end_index)
{
    int i ,j;
    for(j=0,i=start_index;i<end_index;i++,j++)
    result[j]=str[i];
    result[j]='\0';
}


int main()
{
    int a,b ,*x,*y;
    cout<<"Enter the values "<<endl;
   cin>>a>>b;
   x=&a;
   y=&b;
   swap(*x,*y);
   return 0;

}