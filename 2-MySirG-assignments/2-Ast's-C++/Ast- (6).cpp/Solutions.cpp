#include <iostream>
using namespace std;
void sort(int A[],int size,bool asc=true);

void sort(int A[],int size,bool asc=true)
{
    int max=A[0];
 for (i=0;i<10;i++)
 {
    if(asc==true && A[i]>max)
    {
        temp=max;
        max=A[i];
        A[0]=temp;

    }
    else if(asc==false && A[i]<max)
    {  temp=max;
        max=A[i];
        A[0]=temp;


    }
 }
    for(i=0;i<10;i++)
    cout<<"The sorted array is "<<A[i]<<" "<<endl;

}

int main()
{
    
}