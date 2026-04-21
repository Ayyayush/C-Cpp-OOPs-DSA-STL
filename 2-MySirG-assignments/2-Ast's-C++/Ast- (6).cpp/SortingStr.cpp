#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <string.h>


using namespace std;
 void sort(char *A[],int size,bool asc=true)
{
  int i;
  char temp;
    int max=A[0];
 for (i=0;i<size;i++)
 {
    if(asc==true && strcmp(A[i],A[i+1])>0)
    {
        strcpy(temp,A[i]);
       strcpy( A[i],A[i+1]);
        strcpy(A[i+1],temp);

    }
    else if(asc==false && strcmp(A[i],A[i+1])<0)
    {
        strcpy(temp,A[i]);
       strcpy( A[i],A[i+1]);
        strcpy(A[i+1],temp);

    }
 }
    for(i=0;i<size;i++)
    cout<<"The sorted string is "<<A[i]<<" "<<endl;

}
  int main()
  {
    int a=100,j;
    char arr[100];
     cout<<"Enter the string "<<endl;
     gets(arr);
    sort(char *arr[100],int a,bool asc);
   
    return 0;

  }