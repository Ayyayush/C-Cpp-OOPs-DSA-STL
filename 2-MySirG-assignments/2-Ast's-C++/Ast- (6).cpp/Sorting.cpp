#include <iostream>
using namespace std;

void sort(int A[],int size,bool asc=true)
{
  int i,temp;
    int max=A[0];
 for (i=0;i<5;i++)
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
    for(i=0;i<5;i++)
    cout<<"The sorted array is "<<A[i]<<" "<<endl;

}
  int main()
  {
    int a=5,j;
    int b;
    int arr[a];
    bool asc;
      cout<<"Enter the elements of the array"<<endl;
      for(j=0;j<5;j++)
      {
    cin>>arr[j];
      }
    
    sort( arr[5],5, asc);
   
    return 0;

  }