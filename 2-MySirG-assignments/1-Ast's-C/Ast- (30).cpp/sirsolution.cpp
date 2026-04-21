#include <iostream>
using namespace std;
void swap(int A[], int i,int j)
{
    int t;
    t=A[i];
    A[i]=A[j];
    A[j]=t;

}
void sort(int A[],int n)
{
    int r,i,t;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                swap(A,i,i+1)
            }
        }
    }
}

void duplicate(int A[],int n)
{
    //first method is to sort..... 1,2,2,2,3,3,4,5
    int i=0;j=1,count=0;
    sort(A,n);
    while(j<n)
    {
    while(A[i]==A[j])
    if(i+1==j)
    count++;
    j++;
    if(j==n)
    break;
    }
    i=j;
    j=j+1;

    }
void unique()
{
   
     int i=0;j=1;
    sort(A,n);
    while(j<n)
    {
        cout<<A[i];
        if(i==n-1)
        break;
        while(A[i]==A[j])
        {
    while(A[i]==A[j])
    j++;
    if(j==n)
    break;
    }
    i=j;
    j=j+1;

}
