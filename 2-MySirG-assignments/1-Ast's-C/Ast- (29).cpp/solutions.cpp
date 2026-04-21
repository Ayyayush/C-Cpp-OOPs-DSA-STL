#include <iostream>
using namespace std;
int max(int A[],int size)
{
    int i,max;
    max=A[0];
    for(i=1;i<size;i++)
    if(max<A[i])
    max=A[i];
    return max;
}
 int min(int A[] , int size)
 {
    
    int i,min;
    min=A[0];
    for(i=1;i<size;i++)
    if(min<A[i])
    min=A[i];
    return min;
 }

  void sorting(int A[] , int size)
  {
int r,i,t;
for(r=1;r<size;r++)
{
    for(i=0;i<=size-1;i++)
    {
        if(A[i]>A[i+1])
        {
            t=A[i];
            A[i]=A[i+1];
            A[i+1]=t;
        }
    }
}
  }

void rotate(int A[] , int size, int n,int d)
{
    // if d==-1 means left and if d==+1 means right
    int i,temp
    if(d==1)
    {
        for(k=1;k<=n;k++) // n times shifting ke liye
        {
        temp =A[size-1];
        for(i=size-2; i>=0;--)
        A[i+1]=A[i]
        A[0]=temp;
    }
}
else {
    
        for(k=1;k<=n;k++) // n times shifting ke liye
        {
        temp =A[0];
        for(i=1;i<=size-1; i++)
        A[i-1]=A[i]
        A[size-1]=temp;
    }

}
}
 void adjacentdupllicate(int A[] , int size)
 {
    int i;
    for(i=0;i<=size-2;i++) // kyunki last elt ka comparision toh ho nhi payega
    {
        if(A[i]==A[i+1])
        returnA[i];
    }
    return 0;
 }