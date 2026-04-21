#include <iostream>
using namespace std;
int main()
{
     int n,sum=0;
    
     cout<<"enter the size of the array"<<endl;
    cin>>n;
     int array[n];
    
    
    
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
        sum=sum+array[i];
       
    }
     cout<<sum<<endl;
    return 0;
}