#include <iostream>
using namespace std;
void swap()
{
    int n=5,i,j,temp;
    int A[n];
    int B[n];
    cout<<"Enter the elements of the first array"<<endl;
    for(i=0;i<5;i++)
    {
    cin>>A[i];
    }
     cout<<"Enter the elements of the second array"<<endl;
     for(i=0;i<5;i++)
    {
    cin>>B[i];
    }
   
    for(i=0;i<5;i++)
    {
        temp=B[i];
        B[i]=A[i];
        A[i]=temp;
    }

    cout<<"The swapped arrays are "<<endl;
    for(i=0;i<5;i++)
    {
    cout<<A[i]<<" ";
   
    }
     for(i=0;i<5;i++)
    {
   
    cout<<B[i]<<" ";
    }


}
int main()
{
    swap();
    return 0;
}